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
