/*1)Write a program to input n numbers and print the largest and smallest numbers out of them.  

Eg., 3,23,56,34,78,45,26,90,68,77
Biggest Number is 90
Smallest Number is 3  */

#include<stdio.h>
int main()
{
	int i,n,a,b,c;

	printf("enter N:\n");
	scanf("%d",&n);
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a);
		if(i==0)
			b=c=a;    //initialize first value for comparison  
		if(a>=b)
			b=a;
		else if(a<c)
			c=a;
	}
	printf("\nLargest number is:%d\nSmallest number is:%d\n", b,c);
	return 0;
}
