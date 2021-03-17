/*
9)
1
2    3
4    5   6
7    8   9    10
11   12  13   14  15
*/
#include<stdio.h>
int main()
{
	int a,i,j,temp=0;
	printf("enter number:\n");
	scanf("%d",&a);

	for(i=0;i<a;i++)  //for loop
	{
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("%d ", ++temp);
		}
	}
	printf("\n\n");
//-----------------------------------------------------------------------------------------------------	
	i=temp=0;
	while(i<a)       //while loop
	{
	j=0;
		printf("\n");
		while(j<=i)
		{
			printf("%d ",++temp);
			j++;
		}
	i++;
	}
	printf("\n\n");
//----------------------------------------------------------------------------------------------

        i=temp=0;
        do       // Do while loop
        {
        j=0;
                printf("\n");
                do
                {
                        printf("%d ",++temp);
                        j++;
                } while(j<=i);
        i++;
	}while(i<a);
        printf("\n");


	return 0;
}

