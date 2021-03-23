#include<stdio.h>
void addstocks(int);
int display(void);
void purchase(int amount)
{
	int capacity=1000;
	int stocks;
	stocks = display();
	if (capacity >=(stocks+amount))
	{
		addstocks(amount);
		printf("\n%d Stocks purchased successfully",amount);
		stocks = display();
		printf("\nstocks available = %d",stocks);
	}
	else
	{
		printf("\nNot sufficient Storage");
	}
return;
}

