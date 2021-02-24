#include<stdio.h>
int main()
{
	int a,b,c,d;
	float avg;
	printf("enter 4 number to find average\n");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	avg=(a+b+c+d)/(float)4;
	printf("average=%f\n", avg);
	return 0;
}
