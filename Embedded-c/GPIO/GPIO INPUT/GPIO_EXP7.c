/*
Experiment 7: 
Whenever WAKEUP SWITCH Press turn ON BUZZER up to 250msec and Turn OFF BUZZER.
*/

#define RCC_AHB1ENR  *((int *)(0X40023830)) // CLOCK ENABLE
#define GPIOB_ODR    *((int *)(0X40020414)) // PORT B OUTPUT DATA REGISTER
#define GPIOA_MODER  *((int *)(0X40020000)) // PORT A MODER ADDRESS
#define GPIOA_IDR    *((int *)(0X40020010)) // PORT A INPUT DATA REGISTER ADDRESS
#define GPIOA_PUPDR  *((int *)(0X4002000C)) // PORT A PULL UP PULL DOWN REGISTER
#define GPIOB_MODER  *((int *)(0X40020400)) // PORT B MODER ADDRESS


void SW_INT(void)
{
	
	RCC_AHB1ENR |=(0x3); // enable  PORT A PORT B
	while(!(RCC_AHB1ENR & 0x3))
	{
		;
	}
	GPIOA_PUPDR |= (0X01); // WAKE UP CONNECT TO VCC
	GPIOB_MODER |= (0X01<<24); // PORTB OUTPUT MODE
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
			GPIOB_ODR |= (0X01<<12);   //BUZZ ON
			}

	if(GPIOA_IDR & (0x1)) // WAKE UP NOT PRESSED
			{
			GPIOB_ODR &= ~(0X01<<12);  //BUZZ OFF 
			}
	DELAY(300);
	}
	

}
