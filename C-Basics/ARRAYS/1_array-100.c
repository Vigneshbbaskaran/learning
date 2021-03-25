/*1)	"Write the following program : 
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers."
*/
#include<stdio.h>
int main()
{
	int i,a[100];
	printf("\nAll Numbers\na[] = {");
	for (i=0;i<100;i++) // clean memory and store 1-100
	{
		a[i]=i+1;
		printf(" %d,",a[i]);
	}	
	printf("\b}\n");
	printf("\nAll Even elements\n");
	for(i=0;i<100;i++)  // even numbers
	{
		if(a[i]%2==0 && a[i]!=1)
			printf("a[%d] = %d\n",i,a[i]);
	}
 	printf("\nAll odd elements\n");
        for(i=0;i<100;i++) // odd numbers
        {      
                if(a[i]%2!=0 || a[i]==1)
                        printf("a[%d] = %d\n",i,a[i]);
        }
	printf("\nNO 6-105 :");	 
       	for (i=0;i<100;i++) // add 5 with it
        {	a[i]=a[i]+5;
                printf(" %d,",a[i]);
	}
	printf("\b \n");
	return 0;
}


