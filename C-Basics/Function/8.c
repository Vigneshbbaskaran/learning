#include<stdio.h>
int leap(int );

int main()
{
	int a;
	printf("enter a number\n");
        scanf("%d",&a);
	leap(a) ? printf("leap year\n") : printf("Not a leap year\n");

	return 0;

}

int leap(int y)
{
	
     if( ((y%4==0) && (y%100 !=0)) || (y%400==0) )
	     return 1;
     else
	     return 0;
}

