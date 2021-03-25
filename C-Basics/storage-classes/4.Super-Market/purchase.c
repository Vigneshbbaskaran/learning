#include<stdio.h>
extern int stocks;
void addstocks(int);
void purchase(int amount)
{
int capacity=1000;
	if (capacity >=(stocks+amount))
	{
		addstocks(amount);
		printf("\n%d Stocks purchased successfully",amount);
		printf("\nstocks available = %d",stocks);
	}
	else
	{
		printf("\nNot sufficient Storage");
	}
return;
}

