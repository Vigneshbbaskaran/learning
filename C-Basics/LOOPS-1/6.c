/*
6)
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int a,i,j,b=0;
	printf("enter number:\n");
	scanf("%d",&a);

	for(i=0;i<a;i++)  //for loop
	{   
		printf("\n");
		for(j=0;j<=i;j++)
		{
			printf("%d ",b= !b);
		}
		if(i%2==1)
		b = !b;
	}
	printf("\n\n");
//-----------------------------------------------------------------------------------------------------	
	i=b=0;
	while(i<a)       //while loop
	{
	j=0;
		printf("\n");
		while(j<=i)
		{
			printf("%d ",b= !b);
			j++;
		}
		if(i%2==1)
			b= !b;
	i++;
	}
	printf("\n\n");
//----------------------------------------------------------------------------------------------

        i=b=0;
        do       // Do while loop
        {
        j=0;
                printf("\n");
                do
                {
                        printf("%d ",b = !b);
                        j++;
                } while(j<=i);
		if(i%2==1)
			b= !b;
        i++;
	}while(i<a);
        printf("\n");


	return 0;
}

