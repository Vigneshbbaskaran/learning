#include<stdio.h>
int call(int n)
{
	static int x;
	if(n==0 ||n==1)
	{
	//	printf("\n1\t1");
		return 1;
	}
	x= (call(n-1) + call(n-2));
	return x;
}
void Fib(int a)
{	int print;
	print=call(a);
	if(a==0)
	{	printf("1");
		return;
	}
	Fib(--a);
	printf("\t%d",print);
	return;
}

void main()
{
	int a;
	printf("\nenter the Nth position: ");
	scanf("%d",&a);
	Fib(a);
	printf("\n");
	return;
}
