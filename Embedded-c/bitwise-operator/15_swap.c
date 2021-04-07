//15. WAP Swap any two numbers using bitwise operators. How does it work?
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);


	a= a^b;
	b= a^b;
	a= a^b;

	printf("swapped values:\na: %d\nb: %d\n",a,b);

	return 0;
}

	
