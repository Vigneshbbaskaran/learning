/*5)	"Write the following program.
Declare an integer variable ‘size’. 
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array."*/
#include<stdio.h>
int main()
{
	int a[5];
	int temp,i,j=5;
	printf("enter 5 numbers to reverse\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<5;i++)
	{
	j--;
	if(i<j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	}
	printf("\n........REVERSED ARRAY..........\n");
	 for(i=0;i<5;i++)
	 {
		 printf("\na[%d] = %d\n", i,a[i]);
	 }

	return 0;
	}
