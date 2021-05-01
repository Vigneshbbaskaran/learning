#include "systick.h"

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
	STK_VAL   = 10; // GARBAGE VALUE
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}
void delayms(int b)
{

STK_LOAD  = 16000*b; // 1milisec * b
		STK_VAL   = 10; // GARBAGE VALUE
	while(!(STK_CTRL & 0X10000)) // wait untill 100msec dealy
		{
			;
		}
}

void delaysec(int a)
{
	for(;a>0;a--)
		{
			delayms(1000);

		}
}
	
