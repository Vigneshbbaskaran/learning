/*
4) When user chooses quit,display the below report:
i)  Latest Stock
ii) Total number of times sales happened
iii) Total number of items sold
iv) Total number of times purchase happened
v) Total number of items purchased
*/
#include<stdio.h>
extern int stemp,scount,ptemp,pcount;
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
	
	printf("\ni)Latest Stocks: %d",display());
	printf("\nii)Total number of times sales happened: %d",scount);
	printf("\niii)Total number of items sold: %d",stemp);
	printf("\nii)Total number of times purchase happened: %d",pcount);
	printf("\niii)Total number of items purchased: %d\n",ptemp);
	
		
		
return 0;
}
