/*2) When the user chooses Sell the stock option, and there is not enough stock, then instead of cancelling the sales, 2 options will be displayed:
i) Sell the existing stock
ii) Cancel the sales

The user can choose any one of the above options and close the transaction.
*/
#include<stdio.h>
void sales(int);
void purchase(int);
//int stocks; // initial stocks = 500, capacity = 100.
int display(void);


int main()
{
char y;
int a;
int amount;
	do{
	printf("\n----------------------------------SuperMarket---------------------------------------\n");
	printf("\n1)Check Available Stock\n2)Sell items\n3)Purchase New item\n\nSelect any one Number:\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		
		printf("\nAvailable stocks: %d",display());
		break;	
	case 2:
		printf("\nEnter number of amount to sell:");
		scanf("%d",&amount);
		sales(amount);
		break;
	case 3:
		printf("\nEntter number of amount to purchase:");
		scanf("%d",&amount);
		purchase(amount);
		break;
	default:
		printf("\nEnter valid input..!!\n\n");
	
	}
	
	printf("\n\nwant to continue?? Y or N: \n");
	scanf(" %c",&y);
	
	}while(y=='y' || y=='Y');
		
		
return 0;
}
