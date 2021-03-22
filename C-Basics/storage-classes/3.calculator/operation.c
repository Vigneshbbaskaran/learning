#include<stdio.h>
extern int a,b;
int add(void)
	{
	return a+b;
	}

int sub(void)
	{
	return a-b;
	}	

int mul(void)
	{
	return a*b;
	}

float div(void)
	{
		float c;
		c= a/(float)b;
		return c;
	}

int mod(void)
	{
		return a%b;
	}
	
void operation(char c)
{
switch(c)
{
case '+':
	printf("\n%d + %d =%d\n",a,b,add() );
	break;
case '-': 
	printf("\n%d - %d =%d\n",a,b,sub() );
	break;	
case '*': 
	printf("\n%d * %d =%d\n",a,b,mul() );
	break;
case '/': 
	printf("\n%d / %d =%.2f\n",a,b,div() );
	break;
case '%': 
	printf("\n%d %% %d =%d\n",a,b,mod() );
	break;
default:
	printf("\ninvalid input..!\n");
}


	
	
	
	
	
	return;
}

	
