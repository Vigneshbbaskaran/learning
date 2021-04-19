/*
Experiment 3: 
Whenever SW1 is pressed RED LED is ON, 
whenever SW2 is pressed GREEN LED is ON. 
Assign breakpoints after if condition and click run button in debugger window. 
Whenever SW1/SW2 presses program stops at any one of the breakpoint.

*/
#define RCC_AHB1ENR  *((int *)(0X40023830)) // CLOCK ADDRESS
#define GPIOC_MODER  *((int *)(0X40020800)) // PORT C MODER ADDRESS
#define GPIOC_IDR    *((int *)(0X40020810)) // PORT C INPUT DATA REGISTER ADDRESS
#define GPIOC_PUPDR  *((int *)(0X4002080C)) // PORT C PULL UP PULL DOWN ADDRESS
#define GPIOC_ODR    *((int *)(0X40020814)) // PORT C OUTPUT DATA REGISTER
#define GPIOA_MODER  *((int *)(0X40020000)) // PORT A MODER ADDRESS
#define GPIOA_ODR    *((int *)(0X40020014)) // PORT A OUTPUT DATA REGISTER
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

void DELAY(int a)
{	int i;
	for(i=0;i<(1700*a);i++)
	{
		;
	}
}
int main()
{
SW_INT(); //initilization

	
	while(1)
	{
	if(!(GPIOC_IDR & (0x1<<9 )) ) //SW1 PRESSED
			{
			GPIOC_ODR &= ~(0X01<<5);  //PC5 RED LED ON 
			
			}
	if(!(GPIOC_IDR & (0x1<<8 )) ) // SW2 PRESSED
		  {
			GPIOA_ODR &= ~(0X01<<8);  //PA8 GREEN LED ON 
			}
	if((GPIOC_IDR & (0x1<<8 )) && (GPIOC_IDR & (0x1<<9 )) ) // BOTH SWITCH DIDN'T PRESSED
			{
			GPIOA_ODR |= (0X01<<8);   //PA8 GREEN LED OFF
			GPIOC_ODR |= (0X01<<5);   //PC5 RED LED OFF
			}
	DELAY(100);
	}
	

	

}
