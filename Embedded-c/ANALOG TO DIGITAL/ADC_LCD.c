#define RCC_AHB1ENR  *((int*)(0x40023830))
#define GPIOB_MODER  *((int*)(0x40020400))
#define GPIOB_ODR    *((int*)(0X40020414))


#define RCC_APB2ENR *((int*)(0x40023844))
#define ADC1_SR     *((int*)(0x40012000))
#define ADC1_SQR3   *((int*)(0x40012034))
#define ADC1_SMPR1  *((int*)(0x4001200C))
#define ADC1_CR1    *((int*)(0x40012004))
#define ADC1_CR2    *((int*)(0x40012008))
#define ADC1_DR     *((int*)(0x4001204C))


#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))


#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))
	
void LCD_INITIALIZATION();
void LCD_WRITE_STRING(unsigned char s[100]);
void LCD_WRITE_DATAREG(unsigned char data);
void LCD_WRITE_COMREG(unsigned char command);
void WRITE_LOW_NIBBLE(unsigned char a);
void WRITE_HIGH_NIBBLE(unsigned char a);
void PortB_Init();
void delay(int a);
void LCD_WRITE_VALUE(unsigned char data);



#define RCC_AHB1ENR  *((int*)(0x40023830))
#define GPIOB_MODER  *((int*)(0x40020400))
#define GPIOB_ODR    *((int*)(0X40020414))
//---------------------DELAY-----------------------
void delay(int a)
{	
	int i;
	for(i=0;i<(1700*a);i++)
	{
		;
	}
}
//------------------------ENABLE------------------------------
void ENABLE()
{
	GPIOB_ODR |= (0X1<<8); //ENABLE HIGH
	delay(20);
	GPIOB_ODR &= ~(0X1<<8);//enable LOW
}
//------------------------PORT B---------------------------------
void PortB_Init()
{
	RCC_AHB1ENR |=(0x2);//set PORT B clock enable
	while(!(RCC_AHB1ENR & 0x2)) //wait until PORT B is enable
	{
		;
	}
	GPIOB_MODER &= ~(0x00030FFF);//clear the PB0-PB5 AND PB8 
	GPIOB_MODER |=  (0x00010555);//	SET the PB0-PB5 AND PB8 AS OUTPUT
	
	
}

//-------------HIGH NIBBLE--------------------------------------


void WRITE_HIGH_NIBBLE(unsigned char a)
{ int i;
	a=a>>4;
	GPIOB_ODR &= ~(0XF); // CLEAR ALL DATA LINES

	for(i=0;i<4;i++)
	{ 
		if(a & 0x1)
			GPIOB_ODR |= (0x1<<i);
		a=a>>1;
	}
	ENABLE();
}
//-------------------LOW NIBBLE-------------------------------------
void WRITE_LOW_NIBBLE(unsigned char a)
{  int i;
	GPIOB_ODR &= ~(0XF); // CLEAR ALL DATA LINES
 
	for(i=0;i<4;i++)
	{ 
		if(a & 0x1)
			GPIOB_ODR |= (0x1<<i);
		a=a>>1;
	}
	ENABLE();
}
//--------------------------WRITE COMMAND-----------------------------------
void LCD_WRITE_COMREG(unsigned char command)
{
	GPIOB_ODR &= ~(0X1<<4);// RS=0
	WRITE_HIGH_NIBBLE(command);
  WRITE_LOW_NIBBLE(command);
	
}
//-----------------------WRITE DATA---------------------------------
void LCD_WRITE_DATAREG(unsigned char data)
{
	GPIOB_ODR |= (0X1<<4);// RS=1
	WRITE_HIGH_NIBBLE(data);
  WRITE_LOW_NIBBLE(data);
	
}
void LCD_WRITE_STRING(unsigned char s[100])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		LCD_WRITE_DATAREG(s[i]);
	}
}
	//--------------------------------- LCD INIT------------------------------------

void LCD_INITIALIZATION()
{
	//-----------------------------
	delay(20);
	//-----------------------------
	LCD_WRITE_COMREG(0x33);
	//-----------------------------
	delay(1);
	//---------------------------------
	LCD_WRITE_COMREG(0x32);
	//-------------------------------------
	LCD_WRITE_COMREG(0x0C);
	//-----------------------------------------------
	LCD_WRITE_COMREG(0x01);
}
//-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X MAIN -X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-
void LCD_WRITE_Value(int temp)
{
	
		LCD_WRITE_DATAREG((temp/10)+48);
		LCD_WRITE_DATAREG((temp%10)+48);
	
}
	


float temperature;
void PORTC0_INT(void)
{
	
	RCC_AHB1ENR |=(0x1<<2); // enable PORT C
	while(!(RCC_AHB1ENR & 0x4))
	{
		;
	}
	GPIOC_MODER |= (0x03); //enable ANALOG mode for PORT C
}
void sys_tick_int(void)
	{ 
STK_VAL   = 10; // GARBAGE VALUE
STK_CTRL |= 0X07;  // 16MHZ
  }
void ADC_int(void)
{
	RCC_APB2ENR|=(0x1<<8);//ADC clock enabled
	while(!(RCC_APB2ENR|=(0x1<<8))) //wait until clock enabled
	{
		;
	}
ADC1_SQR3 |= (0X0A); // ENABLE SEQUENCE 1 // 10 because IN10--->> PC0
ADC1_SMPR1 |= 0X7; // SAMPLE RATE  480 max cycles
ADC1_CR1 &= ~(0X3<<24); // 12 bit RESOLUTION 
ADC1_CR2 |= (0X1);// ADON CONT
ADC1_CR2 |= (0X1<<10); //EOCS
}
		
void delayms(int b)
{
	STK_VAL   = 10; // GARBAGE VALUE
STK_LOAD  = 16000*b; // 1milisec * b
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}

int main()
{ 
	
	PortB_Init();
	LCD_INITIALIZATION(); //INT LCD
	sys_tick_int();
	PORTC0_INT();
	ADC_int();
	while(1)
	{
		ADC1_CR2 |= (0x1<<30); //swstart
		while((ADC1_SR & 0X2))
		{
			LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
			temperature= (ADC1_DR*300)/(float)4096; // 300---> VOLTAGE && 4096 = 2^12 RESOLUTION
			LCD_WRITE_STRING("Temp ");
      LCD_WRITE_DATAREG(':');
			
			LCD_WRITE_Value(temperature);
			
			LCD_WRITE_STRING(" C");
			//delayms(500);
		}
	}
}
/*
void LCD_WRITE_Value(int temp)
{
	
		LCD_WRITE_DATAREG((temp/10)+48);
		LCD_WRITE_DATAREG((temp%10)+48);
	
}
*/


	