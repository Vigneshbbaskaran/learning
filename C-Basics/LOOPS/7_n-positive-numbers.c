// 7)WaP to read few numbers and keep reading until exactly n positive numbers are entered by the user, and print the sum of positive numbers.
// eg., n = 5
// input : 1  -2  -3   4  -5  -3   7   8  -1  -4  -5   9
// output: 29

#include<stdio.h>
int main()
{
	int i=0,a=1,sum=0,n;
	printf("enter te value for n:");
	scanf("%d",&n);
	printf("enter positive number:\n");
	while(i<n)
	{
		scanf("%d",&a);
		if(a>0)
		{
			sum=sum+a;
			i++;
		}
	}
	printf("sum=%d \n",sum);

	return 0;
}

