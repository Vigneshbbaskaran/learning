#include<stdio.h>
int main()
{
	int a,b,c;
	int *x,*y,*z;
	x=&a;
	y=&b;
	z=&c;
	
	printf("enter three nubers\n");
    	scanf("%d%d%d",&a,&b,&c);

	if (*x >= *y)
    	{
        	if (*x >= *z)
           		 printf("%d is the largest number\n", *x);
        	else
            		printf("%d is the largest number\n", *z);

    	}
    	else
    	{
       		 if (*y >= *z)
            		printf("%d is the largest number\n", *y);
        	 else
            		printf("%d is the largest number\n", *z);
   	 }
}

