/*9)	Write a program to print an integer in binary format.
*/
#include<stdio.h>
int main()
{
	int i,temp,a[4],b;
	printf("enter one digit  number\n");
	scanf("%d",&b);
	for(i=3;i>=0;i--)
	{
		temp=b%2;
		b=b/2;
		a[i]=temp;
	}

	printf("\n binary value: ");
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}

	printf("\n");
	return 0;
}
