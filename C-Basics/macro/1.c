#include<stdio.h>

#define MAX(x,y) x>y?x:y


int main()
{
	int a,b;
	printf("\nenter a:");
	scanf("%d",&a);

	printf("\nenter b:");
	scanf("%d",&b);

	printf("\nbigger no:%d\n",MAX(a,b));

	return 0;}

