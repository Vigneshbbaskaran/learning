#include<stdio.h>
extern int a,b,result;

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
	result = add();
	break;
case '-': 
	result = sub();
	break; 
case '*': 
	result = mul();
	break;
case '/': 
	result = div();
	break;
case '%': 
	result = mod();
	break;
}
return;
}

	
