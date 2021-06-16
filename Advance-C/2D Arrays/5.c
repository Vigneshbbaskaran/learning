//5. Write a function to search for an element in a two dimentional array, and return its position - as row and column numbers(2 return values). Print the indexes in a message like below, with appropriate subscripts:
//The item you were searching for was found in 3nd row, 2nd column.
#include<stdio.h>
int main()
{
	int a[][5]={{1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5}};
	

	int i,j,temp,flag=0;
	printf("Enter a element for search:\n");
	scanf("%d",&temp);
	for(i=0;i<((sizeof(a))/(5*(sizeof(int))));i++)
	{
		for(j=0;j<5;j++)
		{
			if(temp==a[i][j])
			{
				flag=1;
				printf("Found at %drow and %dcolumn\n",i,j);
			}
		}
		if(flag==1)
		printf("\n");
	}
		if(flag==0)
			printf("NOT FOUND\n");

}
