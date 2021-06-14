#include<stdio.h>
int* square(void);
void main()
{
	int *p;
	p=square();
	printf("square value :%d\n",*p);
}

int* square(void)
{
	static int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	a=a*a;
	return &a;
}

