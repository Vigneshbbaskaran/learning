#include<stdio.h>
void main()
{
	char a[5][10];
	int i,j;

	for(i=0;i<5;i++)
	{
		printf("Enter name:\n");
		scanf("\n%s",a[i]);
	}
	printf("\n\nEntered names\n");
	for(i=0;i<5;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
