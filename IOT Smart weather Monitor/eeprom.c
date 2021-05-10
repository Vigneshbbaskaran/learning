#include "LCD.h"
#include "systick.h"
#include "RTC.h"
#include <stdio.h>
#include <string.h>
#define RCC_AHB1ENR  *((int*)(0x40023830))
#define RCC_APB1ENR  *((int*)(0x40023840))

#define GPIOA_MODER *((int*)0x40020000)
#define GPIOB_MODER   *((int*)(0x40020400))
#define GPIOB_ODR     *((int*)(0X40020414))
#define GPIOB_AFRL    *((int*)(0X40020420))
#define GPIOB_PUPDR   *((int*)(0X4002040C))
#define GPIOB_OTYPE   *((int*)(0X40020404))
	

#define I2C1_CR1     *((int*)(0X40005400))
#define I2C1_CR2     *((int*)(0X40005404))
#define I2C1_CCR     *((int*)(0X4000541C))
#define I2C_TRISE    *((int*)(0X40005420))



#define I2C1_SR1    *((int*)(0X40005414))
#define I2C1_SR2    *((int*)(0X40005418))
#define I2C1_DR     *((int*)(0X40005410))
	
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_IDR    *((int *)(0X40020810))
#define GPIOC_PUPDR  *((int *)(0X4002080C))
	//---------------------------------sw---------------------------------------------
void EEPROM_SW_INT(void)
{
	
			RCC_AHB1ENR |=(0x4); // enable PORT C 
			while(!(RCC_AHB1ENR & 0x4))
			{
				;
			}
			GPIOC_PUPDR &= ~(0X15<<16); // CLEAR PULL UP SW1 AND SW2
			GPIOC_PUPDR |= (0X5<<16); // SET PULL UP SW1 AND SW2
			
			
			GPIOC_MODER &= ~(0X3<<10); // CLEAR
			GPIOA_MODER &= ~(0X3<<16); // CLEAR
			GPIOC_MODER |= (0x01)<<10; // ENABLE OUTPUT MODE PORT PC5
			GPIOA_MODER |= (0x01)<<16; // ENABLE OUTPUT MODE PORT PA8
			
}
extern int temperature;
extern int i;
extern int clear;
extern int int_rtc[7];
char eeprom_read_buff[100];
char eeprom_write_Buff[100];
unsigned char char_rtc[7];
//-------xxxxxxxx-----------------------xxxxxxxx--------------------------xxxxxxxx---------------------------------


void I2C1_EEPROM_Initilization(void)
{
			RCC_AHB1ENR |=(0x2); //port B clock

			while(!(RCC_AHB1ENR & (0x2))) // port B clock
			{
			;
			}

			GPIOB_MODER |= (0x1<<15);  //AF PB7
			GPIOB_MODER |= (0x1<<13);  //AF PB6	
			GPIOB_AFRL |=(0x1<<26);    //AF4 for PB6
			GPIOB_AFRL |=(0x1<<30);    //AF4 for PB7
			GPIOB_PUPDR |=(0x1<<12);   // PULLUP
			GPIOB_PUPDR |=(0x1<<14);   //PULLUP
			GPIOB_OTYPE |=(0x1<<6);    //open drain 
			GPIOB_OTYPE |=(0x1<<7);    // open drain

}	


void I2C1_EEPROM_Configuration(void)
{
			RCC_APB1ENR |=(0x01<<21); // I2C1 enable
			while(!(RCC_APB1ENR & (0x01<<21)));
			
			I2C1_CR1 &= ~(0x1); //PE disable
			I2C1_CR2 |=(0x10);	// 16MHZ	
			I2C1_CCR |=(0x50); //100KHz
			I2C1_CR1 &= ~(0x2); //I2C1 mode
	
			I2C_TRISE &=~(0xff);//clear 
			I2C_TRISE =(0x0011);
			I2C1_CR1 |=0x1; //PE

}

int KM_I2C_Mem_Write(short int DevAddress, short int MemAddress, short int MemAddSize, unsigned char *pData, short int len)
{
		short int MemAddSize_temp=0;
		int i=0;
		
		while (len > 0)
		{
					MemAddSize_temp = MemAddSize;	  
					I2C1_CR1 |=(0X01);    //SET PE bit in CR1

					while(I2C1_SR2 &0x2); //Check BUSY bit wait untill it will become ZERO

					I2C1_CR1 |= 1<<8;	//Set start bit
					while(!(I2C1_SR1 & 0x1));//Wait Untill SB bit is set
					clear=I2C1_SR1;	     //Read SR1 to clear START bit
				 
					I2C1_DR = (DevAddress << 1);  //Slave address with Write mode                             
					while((!(I2C1_SR1 & (0x1<<1)) && (!(I2C1_SR1 & (0x1<<10))))); //wait untill ADDR bit set
				 
				 if(I2C1_SR1 & (0x1<<1)) // if ADDR bit is set
				 {
							 clear=I2C1_SR1; //Read SR1 to clear ADDR bit
							 clear=I2C1_SR2; //Read SR2 to clear ADDR bit

								while(!(I2C1_SR1 & (0x01<<7))); //Wait until TX bit set
								I2C1_DR = (MemAddress);         //Register address
									 
								while ((MemAddSize_temp > 0) && (len > 0)) 
								{
											while(!(I2C1_SR1 & (0x01<<7)));
											I2C1_DR = pData[i];
											delayms(1);
											MemAddSize_temp--;
											len--;
											i++;
								}
										
							I2C1_SR1 &=~(0x1<<10);  //clear AF bit in SR1
							I2C1_CR1 |=(0x0200);    //Set STOP bit in CR1
						//	I2C1_CR1 &=~(0X01);    //Reset PE bit in CR1
							delayms(10);
							MemAddress = MemAddress + MemAddSize;										
							//return 1;
			 }
			 else // Not Ack
			 {	 
					 I2C1_SR1 &=~(0x1<<10);  //clear AF bit in SR1
					 I2C1_CR1 |=(0x0200);    //Set STOP bit in CR1
					 I2C1_CR1 &=~(0X01);    //Reset PE bit in CR1
						delayms(500);
					 return 1;
			 }
		}
		return 0;
}
int KM_I2C_Mem_Read(short int DevAddress, short int MemAddress,short int MemAddSize, unsigned char *Data, short int Size)
{
	int K=0;
	
	I2C1_CR1 |= 0x1;//Start peripheral(PE)
	I2C1_CR1 |= (0x1<<10);//Enable ACK 
	
	while(I2C1_SR2 &0x2); //Check BUSY bit wait untill it will become ZERO

	I2C1_CR1 |= 1<<8;	// Set start bit
	while(!(I2C1_SR1 & 0x1));//Wait Untill SB bit is set
	clear=I2C1_SR1;	     //Read SR1 to clear START bit
	 
  I2C1_DR = (DevAddress << 1);  //Slave address with Write mode                             
	while((!(I2C1_SR1 & (0x1<<1)) && (!(I2C1_SR1 & (0x1<<10))))); //wait untill ADDR bit set
	 
				if(I2C1_SR1 & (0x1<<1)) // if ADDR bit is set
				{
					 clear=I2C1_SR1; //Read SR1 to clear ADDR bit
					 clear=I2C1_SR2; //Read SR2 to clear ADDR bit
					 
					 while(!(I2C1_SR1 & (0x01<<7))); //Wait until TX bit set
					 I2C1_DR = (MemAddress);         //Register address
					 
					 
					 I2C1_CR1 |= 1<<8;	//Re-Start Communication
					 while(!(I2C1_SR1 & 0x1));//Wait Untill SB bit is set
					 clear=I2C1_SR1;	     //Read SR1 to clear START bit
				 
					 
					 I2C1_DR = (DevAddress << 1 )+ 1;  //SLAVE address with RIGHT mode 
					 while((!(I2C1_SR1 & (0x1<<1)) && (!(I2C1_SR1 & (0x1<<10))))); //wait untill ADDR bit set
				 
					 if(I2C1_SR1 & (0x1<<1)) // if ADDR bit is set
					 {
							clear=I2C1_SR1; //Read SR1 to clear ADDR bit
							clear=I2C1_SR2; //Read SR2 to clear ADDR bit
						 
							for(K=0;K<Size;K++)
							{
										while(!(I2C1_SR1 & (0x01<<6))); //checking RXNE
								 	 Data[K]=I2C1_DR;
							}
					}
					
						I2C1_CR1 &= ~(0x1<<10);//Disable ACK bit 
						I2C1_CR1 |= (0x1<<9);//SET STOP bit CR1
						I2C1_CR1 &= ~0x1;//RESET peripheral(PE) Bit	
						//delayms(100);
						return 0;
				 } 
				else
				{	
				 
						I2C1_CR1 &= ~(0x1<<10);//Disable ACK bit 
						I2C1_CR1 |= (0x1<<9);//SET STOP bit CR1
						I2C1_CR1 &= ~0x1;//RESET peripheral(PE) Bit
					//	delayms(500);
						return 1;
				}	
}


int temp_2_EEPROM()
{	
			int k=0;
			char char1[20];
			for(i=0;i<7;i++)
						int_rtc[i] = char_rtc[i]-6*(char_rtc[i]>>4) ;
	
	
			sprintf(char1,"%i",int_rtc[1]); //MIN
			strcpy(eeprom_write_Buff,char1);
		
			strcat(eeprom_write_Buff,":");
			
			sprintf(char1,"%i",int_rtc[0]); //SEC
			strcat(eeprom_write_Buff,char1);
	
			strcat(eeprom_write_Buff," ");
			sprintf(char1,"%i",temperature); // temp value
			strcat(eeprom_write_Buff,char1);
			
			
			if(KM_I2C_Mem_Write(0x50,0x00,0x08,eeprom_write_Buff,8))
							 return 1;
		
			delayms(50);
				return 0;
}
