/*
7)
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
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
			printf("%d ", a-i);
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
			printf("%d ",a-i);
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
                        printf("%d ",a-i);
                        j++;
                } while(j<=i);
        i++;
	}while(i<a);
        printf("\n");


	return 0;
}

