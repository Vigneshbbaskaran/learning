/*
7)	Write a function to search for a specific element given by the user,
in an array and return the index where it was found. The function will take the array and the number to search as arguments.
*/
#include<stdio.h>
int pass(int a[10],int search);
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9};
	int i, search, index;
	printf("Enter a number to search b/w 1-10:\n");
	scanf("%d",&search);
	index = pass(a,search);
	printf("\nSearched element %d found in a[%d]\n",search,index);

	return 0;
}
int pass(int a[10],int search)
{

	int i,index;
	for(i=0;i<10;i++)
	{
		if(a[i]== search)
		{
			index = i;
		}
	}
	return index;
}




