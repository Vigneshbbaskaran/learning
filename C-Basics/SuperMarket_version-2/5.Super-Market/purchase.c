#include "header.h"

int ptemp=0,pcount=0;
void purchase(int amount)
{
	int temp,capacity=1000;
	int stocks;
	stocks = display();
	if (capacity >=(stocks+amount))
	{	
		pcount++;
		ptemp = ptemp+amount;
		addstocks(amount);
		printf("\n%d Stocks purchased successfully",amount);
		stocks = display();
		printf("\nstocks available = %d",stocks);
	}
	else
	{
		printf("\nNot sufficient Storage");
		printf("\n1) Fill the godown\n2) Cancel the purchase\n\nchoose one option '1' or '2' :\n");
		scanf("%d",&temp);
		if(temp==1)
		{	
			pcount++;
			ptemp = ptemp+stocks;
			addstocks(capacity-stocks);
			printf("\nStorage full");
		}
	}
return;
}

