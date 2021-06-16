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
	
	int b[][5]={{5,4,3,2,1},
		    {5,4,3,2,1},
		    {5,4,3,2,1},
		    {5,4,3,2,1},
		    {5,4,3,2,1},
		    {5,4,3,2,1},
		    {5,4,3,2,1}};

	int i,j;
	printf("Addition\n");
	for(i=0;i<((sizeof(a))/(5*(sizeof(int))));i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",(a[i][j]+b[i][j]));
		}

		printf("\n");
	}
	
	printf("\n\nsubraction\n");
	for(i=0;i<((sizeof(a))/(5*(sizeof(int))));i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",(a[i][j]-b[i][j]));
		}

		printf("\n");
	}
}
