#include<stdio.h>
int main()
{
	int i,j, n;
	float  cp,sp,profit;
	printf("Enter number of items:\n");
	scanf("%d",&n);
	printf("enter the sales price and profit\n");
	for(i=0;i<n;i++)
	{
		printf("sales =");
		scanf("%f",&sp);
		printf("profit =");
                scanf("%f",&profit);
		cp = sp - profit;
                printf("cost price for entered item =%f\n", cp);
	}
	return 0;
}
