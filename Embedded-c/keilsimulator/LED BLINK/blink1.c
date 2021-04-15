/* Experiment 1: 
Toggle RED LED (PC5) ON time is 50ms and RED LED (PC5) OFF time is 1300ms.
*/



#define RCC_AHB1ENR *((int *)(0X40023830))
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))

void RED_LED_INT(void)
{
	
	RCC_AHB1ENR |=(0x1<<2); // enable PORT C
	while(!(RCC_AHB1ENR & 0x4))
	{
		;
	}
	GPIOC_MODER |= (0x01)<<10; //enable output mode for PORT C
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
RED_LED_INT(); //initilization

	
	while(1)
	{
		GPIOC_ODR &= ~(0X01<<5);  //clear
		DELAY(50);
		GPIOC_ODR |= (0X01<<5);   //set
		DELAY(1300);
		
	}

	

}
