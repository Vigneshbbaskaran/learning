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
