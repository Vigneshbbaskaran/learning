//4. Write a function that can take two integers as input,
//and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. 
//Print the outputs in the main function.


#include<stdio.h>
int add,sub,mul,q,rem;
void calc(int a,int b);
int main()
{
	int a,b;
	printf("enter two numbers a: and b:\n");
	scanf("%d%d",&a,&b);
	calc(a,b);
	printf("Addition:%d\nsubtraction:%d\nmultiplication:%d\nquotient:%d\nand reminder:%d\n",add,sub,mul,q,rem); 
}


void calc(int a,int b)
{
	add=a+b;
	sub=a-b;
	mul=a*b;
	q=a/b;
	rem=a%b;
}


