/*6)	Write a function to return the sum of all numbers in an integer array, sent as argument to the function.
*/
#include<stdio.h>
int sum(int a[5]);
int main()
{
	int i, a[5];
	for(i=0;i<5;i++)
	{
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
	
	int temp;
	temp=sum(a);
	printf("sum of array = %d\n",temp);

	return 0;
}
	
int sum(int a[5])
{
	int i,sum1=0;
	for(i=0;i<5;i++)
	{
		sum1 = sum1 +a[i] ;
	}
return sum1;
}
