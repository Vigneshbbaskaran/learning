#include<stdio.h>
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);

switch(a%2==0)
{
case 1: 
	printf("EVEN\n");
	break;
case 0:
	printf("ODD\n");
	break;
}

return 0;
}
