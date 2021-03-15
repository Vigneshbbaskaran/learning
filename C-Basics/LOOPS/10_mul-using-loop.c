//10)WaP to calculate the product of 2 numbers without using multipliction operator (*).
//eg., input : 4 5

#include<stdio.h>
int main()
{
	int a,b,temp=0,i=0;
	printf("enter two number for multiplication:\n");
	scanf("%d%d",&a,&b);
	while(i<a)
	{

	temp = temp+b;
		i++;

	}
	printf("\nmultiplication = %d\n", temp);
	return 0;
}
