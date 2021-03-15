//5)WaP to read n numbers from user and print the sum of positive numbers and sum of negative numbers seperately.

#include<stdio.h>
int main()
{
	int n,i=0,input,positive=0,negative=0;
	printf("enter n\n");
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&input);
		if(input>0)
			positive = positive + input;
		else
			negative = negative + input;
		i++;
	
	}
	printf("\nPositive =%d\nnegative =%d\n",positive,negative);
return 0;
}
