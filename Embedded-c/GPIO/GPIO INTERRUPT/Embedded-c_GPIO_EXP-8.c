/*
Lab Assignment experiment 8: 
Write a program Request and interrupt on the falling edge of PC8 (whenever SW1 is pressed) 
then toggle RED LED (PC5) and falling edge of PC9 (whenever SW2 is pressed) then toggle GREEN LED (PA8)
increment a counter in the interrupt. 
*/

#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
	
//#define SYSCFG_EXTICR1 *((int*)0x40013808)
#define SYSCFG_EXTICR3 *((int*)0x40013810)
#define EXTI_IMR *((int*)0x40013C00)
#define EXTI_PR *((int*)0x40013C14)
#define EXTI_FTSR *((int*)0x40013C0C)
#define NVIC_ISER0 *((int*)0xE000E100)
	
#define GPIOA_MODER *((int*)0x40020000)
#define GPIOA_ODR   *((int*)0x40020014)
#define GPIOA_IDR   *((int*)0x40020010)
#define GPIOA_PUPDR *((int*)0x4002000C)
	
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_ODR    *((int *)(0X40020814))
#define GPIOC_IDR   *((int*)0x40020810)
#define GPIOC_PUPDR *((int*)0x4002080C)




void Delay(int a)
{
		int i = 0;
		for(i=0; i<1700*a;i++)
		{
			;
		}

}


int counter=0;
void PortC_Red_Sw_Init()
{
	RCC_AHB1ENR|=(0x1<<2);//set PORT C clock enable
	while(!(RCC_AHB1ENR|=(0x1<<2))) //wait until PORTC is enable
	{
		;
	}
	GPIOC_MODER &= ~(0x3<<16);//clear the 17-16 bit position for PC8
	
	GPIOC_PUPDR &= ~(0x3<<16);//clear the 17-16 bit position for PC8
	GPIOC_PUPDR |=  (0x1<<16);//Load "01" value in 17-16 bit position to set PC8 Input

}
void PortC_Red_LED_Init()
{
	RCC_AHB1ENR|=(0x1<<2);//set PORT C clock enable
	while(!(RCC_AHB1ENR|=(0x1<<2))) //wait until PORTC is enable
	{
		;
	}
	GPIOC_MODER &= ~(0x3<<10);//clear the 17-16 bit position for PC5
	GPIOC_MODER |= (0x1<<10);//clear the 17-16 bit position for PC5
	
	GPIOC_ODR |= (0x1<<5);//clear the 5 bit position for PC5 to set LED OFF
}

void PortC_RED_Intr_Enable()
{
	RCC_APB2ENR|=(0x1<<14);//System configuration controller clock enabled
	while(!(RCC_APB2ENR|=(0x1<<14))) //wait until clock enabled
	{
		;
	}

	SYSCFG_EXTICR3 |= (0x2<<0);//Load "0010" value in 0-3rd bit position to select PC8 pin
	EXTI_IMR |= (0x1<<8);
	EXTI_FTSR |= (0x1<<8);
	NVIC_ISER0 |= (0x1<<23);//Interrupt enable in NVIC register
}

void PortC_GREEN_Intr_Enable()
{
	RCC_APB2ENR|=(0x1<<14);//System configuration controller clock enabled
	while(!(RCC_APB2ENR|=(0x1<<14))) //wait until clock enabled
	{
		;
	}

	SYSCFG_EXTICR3 |= (0x2<<4);//Load "0010" value in 7-4th bit position to select PC9 pin
	EXTI_IMR |= (0x1<<9);
	EXTI_FTSR |= (0x1<<9);
	NVIC_ISER0 |= (0x1<<23);//Interrupt enable in NVIC register
}

void PortC_Green_Sw_Init()
{
	RCC_AHB1ENR|=(0x1<<2);//set PORT C clock enable
	while(!(RCC_AHB1ENR|=(0x1<<2))) //wait until PORTC is enable
	{
		;
	}
	GPIOC_MODER &= ~(0x3<<18);//clear the 17-16 bit position for PC9
	
	GPIOC_PUPDR &= ~(0x3<<18);//clear the 17-16 bit position for PC9
	GPIOC_PUPDR |=  (0x1<<18);//Load "01" value in 17-16 bit position to set PC9 Input
}

void PortA_Green_LED_Init()
{
	RCC_AHB1ENR|=(0x1<<0);//set PORT C clock enable
	while(!(RCC_AHB1ENR|=(0x1<<0))) //wait until PORTC is enable
	{
		;
	}
	GPIOA_MODER &= ~(0x3<<16);//clear the 17-16 bit position for PA8
	GPIOA_MODER |= (0x1<<16);//clear the 17-16 bit position for PA8
	
	GPIOA_ODR |= (0x1<<8);//clear the 8 bit position for PA8 to set LED OFF
}


int main()
{
	PortC_Red_Sw_Init();
	PortC_RED_Intr_Enable();
	PortC_Red_LED_Init();
	
	PortC_Green_Sw_Init();
    PortC_GREEN_Intr_Enable();
	PortA_Green_LED_Init();
	
	

	
	while(1)
	{
		;
	}
}

void EXTI9_5_IRQHandler()
{
	if(EXTI_PR&(0X1<<8)) //check PC8 interrupt
	{
		GPIOC_ODR ^= (0x1<<5);//Toggle RED LED PC5
		Delay(100);
		counter++; //increment counter variable
		EXTI_PR=0x1<<8; // clear interrupt Pc8
	}
	if(EXTI_PR&(0X1<<9)) //check PC9 interrupt
	{
	
		GPIOA_ODR ^= (0x1<<8);//Toggle GREEN LED PA8
		Delay(100);
		counter++; //increment counter variable
		EXTI_PR=0x1<<9; // clear interrupt Pc9
	}

}
