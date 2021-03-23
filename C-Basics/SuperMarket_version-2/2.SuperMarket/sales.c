#include<stdio.h>
int display(void);
void deletestocks(int);
void sales(int amount)
{	
	int stocks,temp;
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
		printf("\nNot sufficient stocks available\n");
		printf("\n1) Sell the existing stock\n2) Cancel the sales\n\nchoose one option '1' or '2' :\n");
		scanf("%d",&temp);
		if(temp==1)
		{
			deletestocks(stocks);
			printf("\nzero stocks remaining");
		}	
		
	}
return;
}
	

