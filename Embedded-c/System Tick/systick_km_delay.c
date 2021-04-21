#define RCC_AHB1ENR  *((int *)(0X40023830))
#define GPIOC_MODER  *((int *)(0X40020800))
#define GPIOC_ODR    *((int *)(0X40020814))
	
#define STK_CTRL  *((int *)(0XE000E010))
#define STK_LOAD  *((int *)(0XE000E014))
#define STK_VAL   *((int *)(0XE000E018))

void RED_LED_INT(void)
{
	
	RCC_AHB1ENR |=(0x1<<2); // enable PORT C
	while(!(RCC_AHB1ENR & 0x4))
	{
		;
	}
	GPIOC_MODER |= (0x01)<<10; //enable output mode for PORT C
}

void sys_tick_int(void)
	{

STK_VAL   = 10; // GARBAGE VALUE
STK_CTRL |= 0X05;  // 16MHZ
  }
		
/*
void DELAY(int a)
{	int i;
	for(i=0;i<(1700*a);i++)
	{
		;
	}
}*/
void delayus(int a)
{
STK_LOAD  = 16*a; // 1microsec * a
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}
void delayms(int b)
{
STK_LOAD  = 16000*b; // 1milisec * b
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}
int main()
{
RED_LED_INT(); //initilization
sys_tick_int();
	
	while(1)
	{
		GPIOC_ODR ^= (0X01<<5);  //TOGGLE
		delayus(63000);
		//delayms(130);
	}

	

}
