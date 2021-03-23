#include<stdio.h>
int display(void);
void deletestocks(int);
void sales(int amount)
{	
	int stocks;
	stocks = display();
	if(stocks>=amount)
	{
		deletestocks(amount);
		printf("\n%d Stocks sold successfully",amount);
		stocks = display();
		printf("\nremaining stocks = %d",stocks);
	}
	else
	{
		printf("\nNot sufficient stocks available");
	}
return;
}
	

