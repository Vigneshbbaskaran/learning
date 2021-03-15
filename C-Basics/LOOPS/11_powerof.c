//11)WaP to calculate the power of a number raised to another integer without using any readymade features.
//eg., input: 4 5
//output: 1024 (should be calculated in a repetitive product method)

#include<stdio.h>
int main()
{
	int a,b,temp=1,i=0;
	printf("enter two number for powerof calculation:\n");
	scanf("%d%d",&a,&b);
	while(i<b)
	{

	temp = temp*a;
		i++;

	}
	printf("\npower-of = %d\n", temp);
	return 0;
}
