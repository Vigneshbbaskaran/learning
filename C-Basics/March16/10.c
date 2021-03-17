#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the row\n");
scanf("%d",&a);

i=1;   // initialized to 1 to avoid skipping first star
j=0;

while(i<=a)
{
	if(i==j)       // moves to new line j  initialized zero when row and column are equal
	{
		printf("\n");
		j=0;
		i++;
	}
	else // print star when not equal
	{
		printf("*");
		j++;
	}



}

return 0;
}
