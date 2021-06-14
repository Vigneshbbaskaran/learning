//2. Write a program to add two variables using thier pointers indirection.


#include<stdio.h>
int main()
{
	int a,b,*ptr1,*ptr2;
	a=7;b=3;
	ptr1=&a;
	ptr2=&b;

	printf("a+b= %d\n",*ptr1 + *ptr2);
}
