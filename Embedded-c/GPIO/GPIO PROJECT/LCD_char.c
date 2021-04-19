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
	int main()
	{
	PortB_Init();
	LCD_INITIALIZATION(); //INT LCD
	LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
	LCD_WRITE_DATAREG('A'); //WRITE DATA
	delay(10);
	}
	