#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
	
#define GPIOA_MODER *((int*)0x40020000)
#define GPIOA_AFRH *((int*)0x40020024)

#define UART1_SR *((int*)0x40011000)
#define UART1_DR *((int*)0x40011004)
#define UART1_BRR *((int*)0x40011008)
#define UART1_CR1 *((int*)0x4001100C)

#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))
	
//-------------------------------USART6_include-----------------------------
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_AFRL *((int*)0x40020820)
	
#define UART6_SR *((int*)0x40011400)
#define UART6_DR *((int*)0x40011404)
#define UART6_BRR *((int*)0x40011408)
#define UART6_CR1 *((int*)0x4001140C)
#define NVIC_ISER1 *(( int *)(0xE000E104))

void UART6_int(void)
{
	RCC_AHB1ENR |= (0x01<<2);
	while(!(RCC_AHB1ENR & (0x01<<2)));
	GPIOC_MODER |= 0x1<<13;
	GPIOC_MODER |= 0x1<<15;
	GPIOC_AFRL |= 0X1<<27;
	GPIOC_AFRL |= 0X1<<31;
	
	RCC_APB2ENR |= (0x1<<5);
	while(!(RCC_APB2ENR & (0x1<<5)));
	
}

void UART6_config()
{
	UART6_BRR |= 0X87;
	UART6_CR1 |= 0X1<<2; //RECEIVER ENABLE
	UART6_CR1 |= 0X1<<3; //TRANSMITER ENABLE
	UART6_CR1 |= 0X1<<13; //USART ENABLE
}

void UART6_OUTCHAR(unsigned char a)
{
while(!(UART6_SR & (0x01<<7)))
{
	;
}
UART6_DR = a;
}
void UART6_OutString(char a[500])
{
	int i=0;
	for(i=0;a[i]!='\0';i++)
	{
	UART6_OUTCHAR(a[i]);
	}
}
//----------------------------------led----------------------------------
#define GPIOC_ODR    *((int *)(0X40020814))
	
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
	
	GPIOC_MODER |= (0x01)<<10; //enable output mode for PORT C LED
	
	
//	NVIC_ISER1 |=(0x1<<5); // interrupt enable
	//UART6_CR1 |=(0x1<<5);//RXNEIE
	//UART6_CR1 |=(0x1<<7);//TXEIE 
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


void UART1_instring(void)
{char a[500];
	int i=0;
	for(i=0;i<500;i++)
	{
	a[i] = UART1_INCHAR();
	
	}
	 UART6_OutString(a);
}



//----------------------------------------------MAIN-------------------------------------------------------
int temp=24,hum=26;
char a;
int main()
{
	char Fetch[500];
	sys_tick_int();
	UART6_int();
	UART6_config();
	
	UART1_int();
	UART1_config();
	
	
   UART1_OutString("AT\r\n");
	//a= UART1_instring();
	                           UART1_instring();
	  delaysec(1);
	
  UART1_OutString("AT+RST\r\n");
															UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CWMODE=3\r\n") ;
	                            UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CWJAP=\"FTTH-BSNL\",\"4132968086\"\r\n");
															UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CIFSR\r\n");
															UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CIPMUX=0\r\n");
															UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CWLAP\r\n");
															UART1_instring();
	delaysec(1);
	UART1_OutString("AT+CIPMODE=0\r\n");
															UART1_instring();
	delaysec(1);
	
	while(1)
	{ 
		
	
     UART1_OutString("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
															UART1_instring();
		sprintf(Fetch,"GET /page.php?temp=%i&hum=%i&dev=4001\r\n\r\n", temp,hum);
		temp++;
		hum++;
	  delaysec(1);
		UART1_OutString("AT+CIPSEND=41\r\n");
												UART1_instring();
		DelayMs(500);
    UART1_OutString(Fetch);
												UART1_instring();
		delaysec(1);	
	  UART1_OutString("AT+CIPCLOSE\r\n");
												UART1_instring();
		delaysec(1);
		
		if(hum>=99) // resett values
		{
			temp=24;
			hum=26;
		}
		GPIOC_ODR ^= (0X01<<5);   //Toggle LeD everytime value updated
	}
	//GPIOC_ODR &= ~(0X01<<5);  //ON
//	GPIOC_ODR |= (0X01<<5);   //OFF
}



	