/*9) Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.
*/
#include<stdio.h>

#define array(a,j)   for(i=0;i<j;i++)\
			printf("a[%d]:%d\n",i,a[i]);     




int main()

{
	int a[10],n,i;
	for(i=0;i<10;i++)
	{
	printf("\na[%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\nARRAY ELEMENTS\n");
	array(a,10);

	return 0;
}
