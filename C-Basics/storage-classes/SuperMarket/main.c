/*4)WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket :
Display menu with choices : 
1 ) check AvailableStock 
2 ) Purchase new items
3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit."
*/
#include<stdio.h>
void sales(int);
void purchase(int);
int stocks; // initial stocks = 500, capacity = 100.
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
		printf("\nAvailable stocks: %d",stocks);
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
	
	printf("\n\n\nwant to continue?? Y or N: \n");
	scanf(" %c",&y);
	
	}while(y=='y' || y=='Y');
		
		
return 0;
}
