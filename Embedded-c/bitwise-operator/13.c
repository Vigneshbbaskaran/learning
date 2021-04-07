#include<stdio.h>
int main()
{
	int i=20,a=0x01;
	int data;
	printf("enter value:\n");
	scanf("%d",&data);

	if(data & (a<<i))
		printf("SET\n");
	else
		printf("CLEAR\n");

	return 0;

}




