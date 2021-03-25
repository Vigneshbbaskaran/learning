/*3)	Declare an array of size 10. Enter 10 elements and save them in the array. 
Print the array . Find out the biggest and smallest numbers and their indexes and print. 
*/
#include<stdio.h>
int main()
{
	int i,temp1[2],temp2[2],a[10];
	for(i=0;i<10;i++)
	{
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
	printf("\na[10]= {");
	for(i=0;i<10;i++)
	{
		printf(" %d,",a[i]);
	}
	printf("\b }\n");

	temp1[0]=a[0];
	temp2[0]=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>=temp1[0])
		{
			temp1[0]=a[i]; // values
			temp1[1]=i;   // index
		}
		if(a[i]<=temp2[0])
		{
			temp2[0] =a[i]; // values
			temp2[1] =i;  // index
		

		}
	}

	printf("\nbiggest among all \na[%d] = %d\n",temp1[1],temp1[0]);
        printf("\nsmallest among all \na[%d] = %d\n",temp2[1],temp2[0]);	
	
return 0;

}
