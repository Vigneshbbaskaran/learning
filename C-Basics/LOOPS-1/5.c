/*5)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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
			printf("%d ",j+1);
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
			printf("%d ",j+1);
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
                        printf("%d ",j+1);
                        j++;
                } while(j<=i);
        i++;
	}while(i<a);
        printf("\n");


	return 0;
}

