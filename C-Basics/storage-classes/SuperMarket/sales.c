#include<stdio.h>
int stocks;
void deletestocks(int);
void sales(int amount)
{
	if(stocks>=amount)
	{
		deletestocks(amount);
		printf("\n%d Stocks sold successfully",amount);
		printf("\nremaining stocks = %d",stocks);
	}
	else
	{
		printf("\nNot sufficient stocks available");
	}
return;
}
	

