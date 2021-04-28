#include "address.h"
extern int temperature;
void DelayMs(int b)
{
	
STK_LOAD  = 16000*b; // 1milisec * b
	STK_VAL   = 10; // GARBAGE VALUE
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}
void delaysec(int a)
{
	for(a;a>0;a--)
		{
			DelayMs(1000);

		}
}
void sys_tick_int(void)
	{ 
STK_VAL   = 10; // GARBAGE VALUE
STK_CTRL |= 0X05;  // 16MHZ
  }

void UART1_int(void)
{
	RCC_AHB1ENR |= (0x05); // PORT A AND PORT C ENABLE
	while(!(RCC_AHB1ENR & (0x05))); 
	GPIOA_MODER |= 0x1<<19; // PA9 AF
	GPIOA_MODER |= 0x1<<21; // PA10 AF
	GPIOA_AFRH |= 0X7<<4; // AF7-UART1
	GPIOA_AFRH |= 0X7<<8; // AF7-UART1
	
	RCC_APB2ENR |= (0x1<<4);
	while(!(RCC_APB2ENR & (0x1<<4)));
	
}

void UART1_config()
{
	UART1_BRR |= 0X87; // 115200   
	UART1_CR1 |= 0X1<<2; //RECEIVER ENABLE
	UART1_CR1 |= 0X1<<3; //TRANSMITER ENABLE
	UART1_CR1 |= 0X1<<13; //USART ENABLE
}

void UART1_OUTCHAR(unsigned char a)
{
while(!(UART1_SR & (0x01<<7)))
{
	;
}
UART1_DR = a;
}

unsigned char  UART1_INCHAR(void)
{
char C;
if((UART1_SR & (0x01<<5)))
{
	C = UART1_DR;
	return C;
}

}
//-----------------------------------------string---------------------------------------------------------
void UART1_OutString(char a[100])
{
	int i=0;
	for(i=0;a[i]!='\0';i++)
	{
	UART1_OUTCHAR(a[i]);
	}
}

int UART1_instring(void)
{
	char a[550];
	int i;
	for (i=0;i<550;i++)	
	{
  a[i]=  UART1_INCHAR();
	if(a[i-1]=='O' && a[i]=='K')
	{
		return 1;
	}
}
	return 0;
	}



//----------------------------------------------MAIN-------------------------------------------------------
int hum=50;
char a;
int main()
{
	

	
	//==========================================================
	char Fetch[500];
	sys_tick_int();
	PortB_Init();
	LCD_INITIALIZATION(); //INT LCD
	PORTC0_INT();
	ADC_int();
	
	UART1_int();
	UART1_config();
	
	
   UART1_OutString("AT\r\n");
	                           if(UART1_instring())
															 return 1;
	  delaysec(1);
	
  UART1_OutString("AT+RST\r\n");
															
	delaysec(1);
	UART1_OutString("AT+CWMODE=3\r\n") ;
	                           if(UART1_instring())
															 return 1;
	delaysec(1);
	UART1_OutString("AT+CWJAP=\"FTTH-BSNL\",\"4132968086\"\r\n");
														if(UART1_instring())
															 return 1;
	delaysec(1);
	UART1_OutString("AT+CIFSR\r\n");
														if(UART1_instring())
															 return 1;
	delaysec(1);
	UART1_OutString("AT+CIPMUX=0\r\n");
															if(UART1_instring())
															 return 1;
	delaysec(1);
	UART1_OutString("AT+CWLAP\r\n");
															if(UART1_instring())
															 return 1;
	delaysec(1);
	UART1_OutString("AT+CIPMODE=0\r\n");
															if(UART1_instring())
															 return 1;
	delaysec(1);
	
	while(1)
	{ 
			ADC1_CR2 |= (0x1<<30); //swstart
		while((ADC1_SR & 0X2))
		{
			LCD_WRITE_COMREG(0x80); //SET CURSOR POSITION
			temperature= (ADC1_DR*290)/4096; // 300---> VOLTAGE && 4096 = 2^12 RESOLUTION
			LCD_WRITE_STRING("Temp ");
      LCD_WRITE_DATAREG(':');
			LCD_WRITE_Value(temperature);
			
			LCD_WRITE_STRING(" C");
			
		}
	
     UART1_OutString("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
															if(UART1_instring())
															 return 1;
															
		sprintf(Fetch,"GET /page.php?temp=%i&hum=%i&dev=4001\r\n\r\n", temperature,hum);
	
	  delaysec(1);
		UART1_OutString("AT+CIPSEND=41\r\n");
												if(UART1_instring())
															 return 1;
		DelayMs(500);
    UART1_OutString(Fetch);
												if(UART1_instring())
															 return 1;
		delaysec(1);	
	  UART1_OutString("AT+CIPCLOSE\r\n");
												if(UART1_instring())
															 return 1;
		delaysec(1);
		

	}

}



	