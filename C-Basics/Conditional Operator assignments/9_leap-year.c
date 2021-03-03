#include<stdio.h>
int main()
{
	int a;
	printf("enter a year to check for leap year:\n");
	scanf("%d",&a);

	((y%4==0) && (y%100 !=0)) || (y%400==0) ? printf("LEAP YEAR\n") : printf("NOT A LEAP YEAR\n");

	return 0;
}
