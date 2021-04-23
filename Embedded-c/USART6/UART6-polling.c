#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
	
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_AFRL *((int*)0x40020820)

#define UART6_SR *((int*)0x40011400)
#define UART6_DR *((int*)0x40011404)
#define UART6_BRR *((int*)0x40011408)
#define UART6_CR1 *((int*)0x4001140C)

#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))

void delayms(int b)
{
	STK_VAL   = 10; // GARBAGE VALUE
STK_LOAD  = 16000*b; // 1milisec * b
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}
void sys_tick_int(void)
	{ 
STK_VAL   = 10; // GARBAGE VALUE
STK_CTRL |= 0X05;  // 16MHZ
  }
	
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
	UART6_BRR |= 0X683;
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
unsigned char  UART6_INCHAR(void)
{
while(!(UART6_SR & (0x01<<5)))
{
	;
}
return UART6_DR;
}
char a,b;
int main()
{
	b='A';
UART6_int();
UART6_config();
	while(1)
	{
		UART6_OUTCHAR(b);
		a=UART6_INCHAR();
		

	}
	
}
	