/*Write a program Request and 
interrupt on the falling edge of PA0 (when the user button is pressed) 
and increment a counter in the interrupt. 
*/
#define SYSCFG_EXTICR1  *((int *)(0X40013808))
#define EXTI_IMR        *((int *)(0X40013C00))
#define EXTI_FTSR       *((int *)(0X40013C0C))
#define EXTI_SWIER      *((int *)(0X40013C10))
#define EXTI_PR         *((int *)(0X40013C14))

#define NVIC_ISER0 *((int *)(0XE000E100))

#define RCC_APB2ENR  *((int *)(0X40023844))
#define RCC_AHB1ENR  *((int *)(0X40023830))
#define GPIOA_PUPDR  *((int *)(0X4002000C))

int counter;

void SW_INT(void) 
{
	RCC_AHB1ENR |=(0x1); // enable  PORT A
	while(!(RCC_AHB1ENR & 0x1))
	{
		;
	}
	GPIOA_PUPDR |= (0X01);
}

void EXTI0_INT(void)
{
	RCC_APB2ENR |= 0X1 <<14;
	while(!(RCC_APB2ENR & (0X1 <<14) ) )
	{
		;
	}
	SYSCFG_EXTICR1 &= ~(0XF); // "0000" TO ENABLE PA0
	EXTI_IMR |=0X01; // PA0 INTERRUPT ENABLE
	EXTI_FTSR= 0X1; // PA0 FALLING EDGE
	NVIC_ISER0 |= 0X1<<6; // SET EXTI0
}



void DELAY(int a)
{	int i;
	a=a*1700;
	for(i=0;i<a;i++)
	{
		;
	}
	
	
}
int main()
{
SW_INT(); //initilization switch
EXTI0_INT(); // initilization interrupt
	
	while(1)
	{
;
	}
}

void EXTI0_IRQHandler()
{
	if(EXTI_PR&0X1) //check PA0 interrupt
	{
		counter++; //increment counter variable
		EXTI_PR=0x1; // clear interrupt PA0
	}
}
