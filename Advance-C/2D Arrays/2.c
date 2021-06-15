/*2. Declare a two dimensional array of elements and write a function to take it as argument and print its transpose.
<pre>
eg., if the matrix is:      1 3
                                4 5
                                7 8<br>
its transpose should be :   1 4 7
                                3 5 8
</pre>
*/

#include<stdio.h>
int main()
{
	int a[3][2]={   {1,2},
			{3,4},
			{5,6} };
	int i,j;
	printf("Before transpose\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("\t%d",a[i][j]);
		printf("\n");
	}

	printf("After transpose\n");
	for(j=0;j<2;j++)
	{
		for(i=0;i<3;i++)
			printf("\t%d",a[i][j]);
		printf("\n");
	}
}
