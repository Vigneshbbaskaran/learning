#include<stdio.h>
#include<stdlib.h>

int main()
{	int a,b,i;
	char str1[20],str2[20];
	printf("Enter First String:\t");
	scanf("\n%[^\n]s",str1);
	printf("\nEnter String length:\t");
	scanf("%d",&a);
	for(i=0;str1[i]!='\0';i++);
	if(i<a)
	{
		printf("\n\nINVALID LENGTH\n");
		return 1;
	}
	
	printf("\nEnter Second String:\t");
	scanf("\n%[^\n]s",str2);
	printf("\nEnter String length:\t");
	scanf("%d",&b);
	for(i=0;str1[i]!='\0';i++);
	if(i<b)
	{
		printf("\n\nINVALID LENGTH\n");
		return 1;
	}
	printf("Output:\n\t");	
	for(i=0;i<a;i++)
		printf("%c",str1[i]);	

	for(i=0;i<b;i++)
		printf("%c",str2[i]);	
	printf("\n");
}
