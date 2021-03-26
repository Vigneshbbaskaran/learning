/*
8)	"Write a program to reverse an array and print it:  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};"
*/
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5],i,j=4;
	for(i=0;i<5;i++)
	{
		b[j-i] = a[i];
	}
	 for(i=0;i<5;i++)
        {
                a[i] = b[i];
	}
	 for(i=0;i<5;i++)
	 {
		 printf("\na[%d] = %d\n", i,a[i]);
	 }

	return 0;
	}
