#include "LCD.h"
#include "systick.h"

#define RCC_AHB1ENR  *((int*)(0x40023830))
#define RCC_APB1ENR  *((int*)(0x40023840))


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
  int i=0,clear=0,slave=0;
		char data[50];

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

	RCC_APB1ENR |=(0x01<<21); // I2C1 enable
	while(!(RCC_APB1ENR & (0x01<<21)));


}	

void I2C1_Configuration(void)
{
I2C1_CR1 &= ~(0x1); //PE disable
I2C1_CR2 |=(0x10);	// 16MHZ	
I2C1_CCR |=(0x50); //100KHz
I2C1_CR1 &= ~(0x2); //I2C1 mode
//I2C_TRISE |= 0x;
I2C_TRISE &=~(0xff);//clear 
I2C_TRISE =(0x0011);
I2C1_CR1 |=0x1; //PE

}

void I2C1_scan()
{

	
for(i=0;i<128;i++)
{
		
I2C1_CR1 |=(0x1<<8);//start condition
while((I2C1_SR1 & (0x1))==0); //SB
clear =	I2C1_SR1;// clear SB	
I2C1_DR = i<<1; // just copy and check

//I2C1_CR1 &= ~(0x1<<8);	//CLEAR START BIT
while(((I2C1_SR1 & (0x2))==0)  && ((I2C1_SR1 & (0x1<<10))==0));	 //ADDR ------ AF
if((I2C1_SR1 & 0x2))
	{
		slave=i;
	LCD_WRITE_COMREG(0x01);  //clear screen
	LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
	
	sprintf(data,"%d",slave);
		LCD_WRITE_STRING("device: ");
	LCD_WRITE_STRING(data);

	delaysec(2);
		
		
		
	  clear = I2C1_SR1;
		clear = I2C1_SR2;
		I2C1_CR1 |= (0x1<<9); // stop bit generated
	//	I2C1_SR1 &= ~(0x1<<10);// clear AF
	}
	else
	{
		I2C1_CR1 |= (0x1<<9); // stop bit generated
		I2C1_SR1 &= ~(0x1<<10);// clear AF
	}
}
}

int main()
{
	
	sys_tick_int();
		PortB_Init();
	LCD_INITIALIZATION(); //INT LCD
	
	
	
	I2C1_Initilization();
	I2C1_Configuration();
 
  while((I2C1_SR2 & 0x2)); //busy
	while(1)
	{
		I2C1_scan();
	}
	
}


