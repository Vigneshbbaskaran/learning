//6. Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

#include<stdio.h>
void swap(int *p);
int main()
{
	int a[2]={1,2};
	
	printf("Before swapping\na[0]=%d\na[1]=%d\n\n",a[0],a[1]);
	
	swap(a);
	
	printf("After swapping\na[0]=%d\na[1]=%d\n\n",a[0],a[1]);
}
