#include<stdio.h>
int main()
{
	int a[5];
	int temp,i,j=5;
	printf("enter 5 numbers to reverse\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<5;i++)
	{
	j--;
	if(i<j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	}
	printf("\n........REVERSED ARRAY..........\n");
	 for(i=0;i<5;i++)
	 {
		 printf("\na[%d] = %d\n", i,a[i]);
	 }

	return 0;
	}
