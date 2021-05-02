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
		int data[7];
char print[50];

//--------------------------------------------BCD------------------------------------------
int Buff[]=	{   13, //sec     7th bit ch=0
								15, //min 		
								23, // hr 
								7, //week day
								2, //date
								5, //month
								21, //year
							//	93  //control bit 1--> RS0 bit2-->RS1 bit4-->SQWE bit7--->OUT 
							};


char DEC_2_BCD(int a)
{
	int temp,i,j=0,check=4;
	char bcd;
	bcd &= ~(0xFF); // clear bcd bits
	
	for(i=0;i<2;i++) // i=0;First digit i=1;Second Digit
	{
	temp = a%10; // first digit
		a = a / 10; // remove first digit
		
		for(;j<check;j++)  //check=4 if i=0;
		{
			if( (temp & 0x1) ==1) // check first digit
			{
				bcd |= (0x1<<j); // check each digit and place the bit at position in bcd
				
			}
			temp >>= 1; // remove tested bit(perform four times test)
			
		} 
		check = check*2; //now perform next 4bits
		
	}
	return bcd;
}
//---------------------------------------------BCD_2_DEC---------------------------------------------------------

int BCD_2_DEC(char a)
{
int i=0,dec=0,j=0,check=4, digit=0,var[2];
	
		for(i=0;i<2;i++) // i=0;First digit i=1;Second Digit
	{
		
		
		for(;j<check;j++,digit++)  //check=4 if i=0;
		{
				
	if(a &(0x1<<j))
		{
			if((j==0) || (j==4))
				dec =  dec + 1;
			dec = dec + (digit*2);
		
		}
			
		} 
		check = check*2; //now perform next 4bits
		 digit=0;
		var[i]=dec; //var 0 = first digit; var 1 is 2nd digit; 
		dec=0;
	}
	dec = (var[1]*10) + var[0] ;
	
	

return dec;

}
//-------xxxxxxxx-----------------------xxxxxxxx--------------------------xxxxxxxx---------------------------------
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
void I2C1_write()
{	

while((I2C1_SR2 & 0x2)); //busy
I2C1_CR1 |=(0x1<<8);//start condition
while((I2C1_SR1 & (0x1))==0); //SB
clear =	I2C1_SR1;// clear SB	
I2C1_DR = (0x68)<<1; // RTC slave address

//I2C1_CR1 &= ~(0x1<<8);	//CLEAR START BIT
while(((I2C1_SR1 & (0x2))==0)  && ((I2C1_SR1 & (0x1<<10))==0));	 //ADDR ------ AF
if((I2C1_SR1 & 0x2))
	{
	  clear = I2C1_SR1;
		clear = I2C1_SR2;	
		LCD_WRITE_COMREG(0x01);//clear screen
		LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
		LCD_WRITE_STRING("device FOUND");
		delaysec(1);
	}
	else
	{
		I2C1_CR1 |= (0x1<<9); // stop bit generated
		I2C1_SR1 &= ~(0x1<<10);// clear AF
	}
while(!(I2C1_SR1 & (0x1<<7))){;}//wait until txe bit set
			I2C1_DR = 0x00;  //memory address
		for(i=0;i<7;i++)
	{
		  while(!(I2C1_SR1 & (0x1<<7))){;}//wait until txe bit is set
			
			I2C1_DR =  DEC_2_BCD (Buff[i]);
	}
	
	I2C1_CR1 |=(0x200);//stop	
I2C1_CR1 &=~(0x1<<10); // clear AF

}


void I2C1_Read(int time)
{
	I2C1_CR1 &= ~(0x1); //PE disable
  I2C1_CR1 |= (0x1<<10); //ACK
	I2C1_CR1 |=0x1; //PE
	

	while((I2C1_SR2 & 0x2)); //busy
I2C1_CR1 |=(0x1<<8);//start condition
while((I2C1_SR1 & (0x1))==0); //SB
clear =	I2C1_SR1;// clear SB	
I2C1_DR = (0x68<<1); // RTC slave address

//I2C1_CR1 &= ~(0x1<<8);	//CLEAR START BIT
while(((I2C1_SR1 & (0x2))==0)  && ((I2C1_SR1 & (0x1<<10))==0));	 //ADDR ------ AF
if((I2C1_SR1 & 0x2))
	{
	  clear = I2C1_SR1;
		clear = I2C1_SR2;	
			LCD_WRITE_COMREG(0x01);//clear screen
		LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
		
}
    while(!(I2C1_SR1 & (0x1<<7))){;}//wait until txe bit set
		
	    I2C1_DR = time; //address
			I2C1_CR1 |= (0x1<<8); //Restart
			while((I2C1_SR1 & (0x1))==0); //SB
				clear =	I2C1_SR1;// clear SB
		
			I2C1_DR =0xD1;// slave address(0x68<<1) + read mode(1)
			
			
			while(((I2C1_SR1 & (0x2))==0)  && ((I2C1_SR1 & (0x1<<10))==0));	 //ADDR ------ AF
			if((I2C1_SR1 & 0x2))
	{
	  clear = I2C1_SR1;
		clear = I2C1_SR2;	
}
	LCD_WRITE_COMREG(0x01);//clear screen
		LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION

	
		
			while(!(I2C1_SR1 & (0x1<<6))){;}//wait until rxne bit is set
		
	   data[time]= BCD_2_DEC(I2C1_DR) ; 	
	
		I2C1_CR1 &=~(0x1<<10); 
		
		 I2C1_CR1 |=(0x1<<9);//stop		
}

void RTC_CLOCK_DISPLAY()
{
		I2C1_Read(0x00);
		I2C1_Read(0x01);
		I2C1_Read(0x02);
		I2C1_Read(0x03);
		I2C1_Read(0x04);
		I2C1_Read(0x05);
		I2C1_Read(0x06);
		I2C1_Read(0x07);
		LCD_WRITE_COMREG(0x01);//clear screen
		LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
		 LCD_WRITE_Value(data[0]);
	LCD_WRITE_STRING(":");
		 LCD_WRITE_Value(data[2]);
	LCD_WRITE_STRING(":");
		 LCD_WRITE_Value(data[3]);
			LCD_WRITE_COMREG(0xC0); //SET CURSOR POSITION
		//LCD_WRITE_STRING(" d ");
		 LCD_WRITE_Value(data[4]);
		LCD_WRITE_STRING("/");
		 LCD_WRITE_Value(data[5]);
		LCD_WRITE_STRING("/");
		 LCD_WRITE_Value(data[6]);
	
}

int main()
{
	
	sys_tick_int();
	PortB_Init(); // For LCD
	LCD_INITIALIZATION(); //INT LCD
	
	
	
	I2C1_Initilization();
	I2C1_Configuration();
 
 I2C1_write();
	while(1)
	{
		RTC_CLOCK_DISPLAY();
		delayms(500);
	}
	
}
