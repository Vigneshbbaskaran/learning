#include<stdio.h>
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);

if(a==0)
	printf("entered number is zero\n");
else if(a>0)
	printf("entered number is positive\n");
else
	printf("entered number is negtive\n");

return 0;
}
	
