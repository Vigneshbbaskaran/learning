/*3)using while ,do while and for loops
*
* *
* * *
* * * *
* * * * *
*/


#include<stdio.h>
int main()
{
	int a,i,j;
	printf("enter number:\n");
	scanf("%d",&a);

	for(i=0;i<a;i++)  //for loop
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
	}
	printf("\n\n");
//-----------------------------------------------------------------------------------------------------	
	i=0;
	while(i<a)       //while loop
	{
	j=0;
		printf("\n");
		while(j<=i)
		{
			printf("*");
			j++;
		}
	i++;
	}
	printf("\n\n");
//----------------------------------------------------------------------------------------------

        i=0;
        do       // Do while loop
        {
        j=0;
                printf("\n");
                do
                {
                        printf("*");
                        j++;
                } while(j<=i);
        i++;
	}while(i<a);
        printf("\n");


	return 0;
}

