#include<stdio.h>
int r,c;
int search(int a[][5],int temp)
{
	
	int i,j,flag=0;
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			if(temp==a[i][j])
			{
				flag=1;
				r=i;
				c=j;
			printf("1");
				return 0;
			}
		}
		if(flag==1)
		printf("\n");
	}
		if(flag==0)
		{
			r=-1;
			c=-1;
			printf("2");
		}
		return 0;

}
int main()
{
	int a[][5]={{1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5},
		    {1,2,3,4,5}};
	

	int temp;
	printf("Enter a element for search:\n");
	scanf("%d",&temp);
	search(a,temp);
	
	if(r!=-1)
		printf("\n Found at %drow and %dcolumn\n",r,c);
	if(r==-1)	
		printf("\n Not Found!\n");
}

