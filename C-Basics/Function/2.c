//2)Write a function ,that can take two integers, swap their values and print their new values.return type should be void.
#include<stdio.h>
void swap(int,int);

int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	swap(a,b);

	return 0;
}

void swap(int a, int b)
{
	printf("swapped: \n%d\n%d\n",b,a);

	return;
}
