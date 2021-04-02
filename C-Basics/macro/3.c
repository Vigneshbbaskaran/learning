/*3) Write a macro to find biggest of three numbers, using biggest of two numbers macro.
*/
#include<stdio.h>
#define MAX(x,y) (x)>(y)?(x):(y)
int main()
{
	int a,b,c,temp=0;
	printf("\nenter a:");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("\nenter c:");
	scanf("%d",&c);
	
	temp=MAX(a,b);
	if(temp==a)
	{
		temp=MAX(a,c);
		if(temp==a)
			 printf("a:%d is the largest number\n", a);
		else
		         printf("c:%d is the largest number\n", c);
	}
	else
	{
		temp=MAX(b,c);
		if(temp==b)
			 printf("b:%d is the largest number\n", b);
		else
		         printf("c:%d is the largest number\n", c);
	}
	
	return 0;
	}
