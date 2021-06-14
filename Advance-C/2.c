#include<stdio.h>
int main()
{
	int a,b,*ptr1,*ptr2;
	a=7;b=3;
	ptr1=&a;
	ptr2=&b;

	printf("a+b= %d\n",*ptr1 + *ptr2);
}
