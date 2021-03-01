#include<stdio.h>
int main()
{
	int a;
	printf("enter a year\n");
	scanf("%d",&a);

	if(a%4 ==0)
		printf("\nentered year is leap year\n");
	else
		printf("\nentered year is NOT leap year\n");
return 0;
}

