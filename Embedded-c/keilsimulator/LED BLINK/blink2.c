/*Experiment 2: 
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN – PA8): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically. 
USER LED2 (RED – PC5): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.
*/

#define RCC_AHB1ENR *((int *)(0X40023830)) // CLOCK ENABLE ADDRESS
#define GPIOC_MODER  *((int *)(0X40020800)) // PORT C MODER ADDRESS
#define GPIOA_MODER  *((int *)(0X40020000)) // PORT A MODER ADDRESS
#define GPIOC_ODR    *((int *)(0X40020814)) // PORT C OUTPUT DATA REGISTER
#define GPIOA_ODR    *((int *)(0X40020014)) // PORT A OUTPUT DATA REGISTER
void RED_LED_INT(void)
{
	
	RCC_AHB1ENR |=(0x5); // enable PORT C and PORT A
	while(!(RCC_AHB1ENR & 0x5))
	{
		;
	}
	GPIOC_MODER &= ~(0X3<<10); // CLEAR
	GPIOA_MODER &= ~(0X3<<16); // CLEAR
	GPIOC_MODER |= (0x01)<<10; // ENABLE OUTPUT MODE
	GPIOA_MODER |= (0x01)<<16; // ENABLE OUTPUT MODE
}

void DELAY(int a)
{	int i;
	for(i=0;i<(1700*a);i++)
	{
		;
	}
}
int main()
{
RED_LED_INT();


	while(1)
	{	
		GPIOA_ODR |= (0X01<<8); //SET PA8
		GPIOC_ODR |= (0X01<<5); //SET PC5
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8
		DELAY(50);
		
		GPIOA_ODR |= (0X01<<8); //SET  PA8
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8
		GPIOC_ODR &= ~(0X01<<5); //CLEAR PC5
		DELAY(150);
	//	-------------------------------------------------------- 
		GPIOA_ODR |= (0X01<<8); //SET PA8
		GPIOC_ODR |= (0X01<<5); //SET PC5
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8
		GPIOC_ODR &= ~(0X01<<5); //CLEAR PC8
		DELAY(50);
	//------------------------------------------------ 450
		GPIOA_ODR |= (0X01<<8); //SET PA8
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8		
		DELAY(50);
		
		GPIOA_ODR |= (0X01<<8); //SET PA8
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8		
		DELAY(150);
		
		GPIOA_ODR |= (0X01<<8); //SET PA8
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8		
		DELAY(50);
		
		GPIOA_ODR |= (0X01<<8); //SET PA8
		DELAY(50);
		
		GPIOA_ODR &= ~(0X01<<8); //CLEAR PA8		
		GPIOC_ODR &= ~(0X01<<5); //CLEAR PC8
		DELAY(50);
	//-----------------------------------
		
	
		
	}

	

}
