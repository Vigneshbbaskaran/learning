#include "LCD.h"
#include "systick.h"
#include <stdio.h>
#include <string.h>
#define RCC_AHB1ENR  *((int*)(0x40023830))
#define RCC_APB1ENR  *((int*)(0x40023840))


#define GPIOB_MODER   *((int*)(0x40020400))
#define GPIOB_ODR     *((int*)(0X40020414))
#define GPIOB_AFRL    *((int*)(0X40020420))
#define GPIOB_PUPDR   *((int*)(0X4002040C))
#define GPIOB_OTYPE   *((int*)(0X40020404))
#define GPIOC_ODR    *((int *)(0X40020814))
#define GPIOA_ODR    *((int *)(0X40020014))

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
	
int KM_I2C_Mem_Write(short int DevAddress, short int MemAddress, short int MemAddSize, unsigned char *pData, short int len);
int KM_I2C_Mem_Read(short int DevAddress, short int MemAddress,short int MemAddSize, unsigned char *Data, short int Size);
//--------------------------------------------------------------------------------------
extern char eeprom_read_buff[100];
extern int temperature;
extern unsigned char char_rtc[7];
int i=0,clear=0;
int int_rtc[7];

char rtc_write_Buff[]=	{   0x00, //sec     7th bit ch=0
											0x44, //min 		
											0x21, // hr 
									 		0x3, //week day
								 			0x6, //date
											 0x5, //month
											0x21, //year
									//	93  //control bit 1--> RS0 bit2-->RS1 bit4-->SQWE bit7--->OUT 
												};


//--------------------------------------


void I2C1_Initilization(void)
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




void I2C1_Configuration(void)
{
			RCC_APB1ENR |=(0x01<<21); // I2C1 enable
			while(!(RCC_APB1ENR & (0x01<<21)));
				
			I2C1_CR1 &= ~(0x1); //PE disable
			I2C1_CR2 |=(0x10);	// 16MHZ	
			I2C1_CCR |=(0x50); //100KHz
			I2C1_CR1 &= ~(0x2); //I2C1 mode
			//I2C_TRISE |= 0x;
			I2C_TRISE &=~(0xff);//clear 
			I2C_TRISE =(0x0011);
			I2C1_CR1 |=0x1; //PE

}

int RTC_CLOCK_DISPLAY(int x)
{
			
			if(KM_I2C_Mem_Read(0x68,0x00,0x01,char_rtc,7)) // (slave address, mem address, no. of page extra)	
								return 1;
			for(i=0;i<7;i++)
						int_rtc[i] = char_rtc[i]-6*(char_rtc[i]>>4) ;
			if(!(GPIOC_IDR & (0x1<<9 )) ) //sw1 pressed
				{
						if(KM_I2C_Mem_Write(0x68,0x00,0x01,rtc_write_Buff,7))
							 return 1;
				}
			LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
			LCD_WRITE_STRING(" ");
			LCD_WRITE_Value(int_rtc[2]); // HR
			
			LCD_WRITE_STRING(":");
			LCD_WRITE_Value(int_rtc[1]); //MIN
								
			LCD_WRITE_STRING(":");
			LCD_WRITE_Value(int_rtc[0]); //SEC
	
			LCD_WRITE_STRING(" "); //TEMPERATURE
			LCD_WRITE_STRING("T");
				
				LCD_WRITE_STRING(":");
			LCD_WRITE_Value(temperature);
			LCD_WRITE_STRING("*C  ");
			
			LCD_WRITE_COMREG(0xC0); //SET CURSOR POSITION
			LCD_WRITE_STRING(" ");
			
			LCD_WRITE_Value(int_rtc[4]); //DATE
			LCD_WRITE_STRING("/");

			LCD_WRITE_Value(int_rtc[5]); //MONTH
			LCD_WRITE_STRING("/");
			LCD_WRITE_Value(int_rtc[6]); // YEAR

			if(x==0)//CHECK CONNECTION STATUS
			{
				LCD_WRITE_STRING("  OK     ");
						GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8
						GPIOC_ODR |= (0X01<<5); //SET PC5
			
			}
			else
			{
				LCD_WRITE_STRING("  ERROR");
				GPIOC_ODR &= ~(0X01<<5); //CLEAR PC5
				GPIOA_ODR |= (0X01<<8); //SET PA8
			}


			if(!(GPIOC_IDR & (0x1<<8 )) ) //SW2 pressed EEPROM CONTENT
			{
				if(KM_I2C_Mem_Read(0x50,0x00,0x08,eeprom_read_buff,8)) // (slave address, mem address, no. of page extra)	
							return 1;
				LCD_WRITE_COMREG(0x01);//clear screen
				LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION 
				LCD_WRITE_STRING(eeprom_read_buff);
				delaysec(1);
			}		
			return 0;
}
