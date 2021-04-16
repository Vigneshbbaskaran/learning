/*Experiment 4: 
Use “WAKEUP SWITCH” and declare “counter” global variable. 
Your program should increment counter by one, every time switch is pressed.
Note how the value of counter changes on each “WAKEUP SWITCH” press.
Use debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?
Note: Define counter as a global variable and in debug perspective use continuous refresh option 
(You will find Continuous Refresh button on top of the Expression Window). 
You can use step debugging or breakpoints to check the variable value. Hint: To add variable to Expression Window,
select and right click the variable name and select “Add Watch Expression”. 
To view Expression Window, click on View button from Keil menu bar and select Expressions.
*/
#define RCC_AHB1ENR  *((int *)(0X40023830)) // ENABLE CLOCK ADDRESS

#define GPIOA_MODER  *((int *)(0X40020000)) // PORT A MODER ADDRESS
#define GPIOA_IDR    *((int *)(0X40020010)) // PORT A INPUT DATA REGISTER
#define GPIOA_PUPDR  *((int *)(0X4002000C)) // PORT A PULL UP PULL DOWN ADDRESS

int counter;

void SW_INT(void)
{
	
	RCC_AHB1ENR |=(0x1); // enable  PORT A
	while(!(RCC_AHB1ENR & 0x1))
	{
		;
	}
	GPIOA_PUPDR |= (0X01); // WAKE UP SWT CONNECT TO VCC
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
	if(!(GPIOA_IDR & (0x1)) ) // WAKE UP SWITCH PRESSED
			{
			counter++;
			}

	if(GPIOA_IDR & (0x1)) // WAKE UP SWITCH NOT PRESSED
			{
		
			}
	DELAY(250);
	}
	

	

}
