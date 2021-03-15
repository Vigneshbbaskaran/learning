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
