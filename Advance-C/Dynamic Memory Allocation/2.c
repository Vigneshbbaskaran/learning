#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr,n,i;
	printf("Enter number of elementes to be enter: ");
	scanf("%d",&n);

	arr = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d]:",i+1);
		scanf("%d",&arr[i]);
	}

	int a,j,k=0;
	for(i=0;i<n;i++)
	{	
				k=0;
				for(j=0;j<n-1-i;j++)
				{
					if(arr[j]>arr[j+1])
					{
						k=1;
						a=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=a;
					}
				}
				
			if(k==0)
			break;
	}
	printf("\nSorted Numbers:\n");	
		for(i=0;i<n;i++)
		printf("\t\t%d\n",arr[i]);

}
