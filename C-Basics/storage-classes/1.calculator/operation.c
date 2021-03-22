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
	
int operation(char c)
{
switch(c)
{
case '+':
	return add() ;
	
case '-': 
	return sub();
	
case '*': 
	return mul();
	
case '/': 
	return div();
	
case '%': 
	return mod();
	
	
}
}

	
