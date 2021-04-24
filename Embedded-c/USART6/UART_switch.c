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
	//--------------------------------sw--------------------------------------------------

#define GPIOC_IDR    *((int *)(0X40020810))
#define GPIOC_PUPDR  *((int *)(0X4002080C))
#define GPIOC_ODR    *((int *)(0X40020814))
#define GPIOA_MODER  *((int *)(0X40020000))
#define GPIOA_ODR    *((int *)(0X40020014))
	
void SW_INT(void)
{
	
	RCC_AHB1ENR |=(0x5); // enable PORT C and  PORT A
	while(!(RCC_AHB1ENR & 0x5))
	{
		;
	}
	GPIOC_PUPDR &= ~(0X15<<16); // CLEAR PULL UP
	GPIOC_PUPDR |= (0X5<<16); // SET PULL UP
	GPIOC_MODER &= ~(0X3<<10); // CLEAR
	GPIOA_MODER &= ~(0X3<<16); // CLEAR
	GPIOC_MODER |= (0x01)<<10; // ENABLE OUTPUT MODE PORT PC5
	GPIOA_MODER |= (0x01)<<16; // ENABLE OUTPUT MODE PORT PA8
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
/*while(!(UART6_SR & (0x01<<5)))
{
	;
}*/
if((UART6_SR & (0x01<<5)))
   return UART6_DR;
}

char a,b;
int main()
{
	b='A';
	sys_tick_int();
SW_INT(); //initilization
UART6_int();
UART6_config();
	while(1)
	{
	
		//a=UART6_INCHAR();
			UART6_OUTCHAR(a);
		if(!(GPIOC_IDR & (0x1<<9 )) ) //sw1 pressed
			{
				UART6_OUTCHAR('R');
		//	GPIOC_ODR &= ~(0X01<<5);  //PC5 ON 
			
			}
	if(!(GPIOC_IDR & (0x1<<8 )) ) //sw2 pressed
		  {
				UART6_OUTCHAR('G');
		//	GPIOA_ODR &= ~(0X01<<8);  //PA8 ON 
			}
	if((GPIOC_IDR & (0x1<<8 )) && (GPIOC_IDR & (0x1<<9 )) )
			{
			GPIOA_ODR |= (0X01<<8);   //PC5 OFF
			GPIOC_ODR |= (0X01<<5);   //PC5 OFF
			}
		a=UART6_INCHAR();
		if(a=='R')
			GPIOC_ODR &= ~(0X01<<5);  //PC5 ON 
		if(a=='G')
			GPIOA_ODR &= ~(0X01<<8);  //PA8 ON 
		delayms(300);
			
		
	}
	
}
	