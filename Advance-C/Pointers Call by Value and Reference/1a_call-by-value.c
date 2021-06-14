/*
1)Write a program to swap two numbers using Call by Value.
*/
#include<stdio.h>
void swap1(int a, int b);
int main()
{
	int a,b;
	printf("\nenter a: ");
	scanf("%d",&a);
	printf("\nenter b: ");
	scanf("%d",&b);

	swap1(a,b);

	return 0;
}


void swap1(int a,int b)
{
	int temp=0;

	temp=a;
	a=b;
	b=temp;

	printf("\noutput:\na = %d\nb = %d\n",a,b);

	return;
}

