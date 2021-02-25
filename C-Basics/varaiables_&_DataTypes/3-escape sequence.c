#include<stdio.h>
int main()
{
	int a;
	printf("enter 4 digit number\n");
	scanf("%d",&a);
	printf("%d\b\b\b ",a);
	printf("%d\b\b ",a);
	printf("%d\b ",a);
	printf("%d ",a);
	return 0;
}


