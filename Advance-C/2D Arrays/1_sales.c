/*
1.Declare a two dimensional array of elements for sales details of a store, 
for each item sold by sales man. Take the sales values as input and print the array in matrix form.

Find out and print the following :
1.Total sales by each sales man
2.Total sales for a item
3.Total sales
*/
#include<stdio.h>
int main()
{
	int a[4][3]={{1,2,3},{5},{12,45,67},{12,4,8}};// 4 men, 3 items.
	int i,j,temp=0;
	printf(" 1.Total sales by each sales man\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			temp += a[i][j];
		printf("\t%d.Total sales:%d\n",i+1,temp);
			temp=0;

	}

	printf("\n 2.Total sales for a item\n");
	
	for(j=0;j<3;j++)
	{
		for(i=0;i<4;i++)
			temp += a[i][j];
		printf("\t%d.Total sales for this item:%d\n",j+1,temp);
		temp =0;	
			
	}
	printf("\n 3.Total sales\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			temp += a[i][j];

			
	}
	printf("\t1.Total sales by shop:%d\n",temp);
}
