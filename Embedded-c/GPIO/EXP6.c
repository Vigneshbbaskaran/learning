/*
Experiment 6: 
Read WAKEUP SWITCH, 
if switch is press RED LED is ON otherwise RED LED is OFF.
Note that RED LED should remain ON for the duration switch is kept pressed
i.e. RED LED should turn OFF when switch is released.
*/

#define RCC_AHB1ENR  *((int *)(0X40023830)) // CLOCK ENABLE ADDRESS
#define GPIOC_ODR    *((int *)(0X40020814)) // PORT C OUTPUT DATA REGISTER ADDRESS
#define GPIOA_MODER  *((int *)(0X40020000)) // PORT A MODER ADDRESS
#define GPIOA_IDR    *((int *)(0X40020010)) // PORT A INPUT DATA REGISTER
#define GPIOA_PUPDR  *((int *)(0X4002000C)) // PORT A PULL UP PULL DOWN ADDRESS
#define GPIOC_MODER  *((int *)(0X40020800)) // PORT C MODER ADDRESS


void SW_INT(void)
{
	
	RCC_AHB1ENR |=(0x5); // enable  PORT A PORT C
	while(!(RCC_AHB1ENR & 0x5))
	{
		;
	}
	GPIOA_PUPDR |= (0X01); // WAKE UP SWT CONNECT TO VCC
	GPIOC_MODER |= (0X01<<10); // PC5 OUTPUT MODE
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
	if(!(GPIOA_IDR & (0x1)) ) // WAKE UP PRESSED
			{
		GPIOC_ODR &= ~(0X01<<5);  //PC5 ON 
			}

	if(GPIOA_IDR & (0x1)) // WAKE UP NOT PRESSED
			{
		GPIOC_ODR |= (0X01<<5);   //PC5 OFF
			}
	DELAY(300);
	}
	

	

}
