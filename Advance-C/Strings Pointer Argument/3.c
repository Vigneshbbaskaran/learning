/*
3)Write a function to replace a given character by another character in a string.
The function takes one string, and 2 characters as input.
*/

#include<stdio.h>
void replace(char *a, char b, char c)
{
	int i;
	for(i=0;*(a+i)!='\0';i++)
	{
		if(a[i]==b)
			a[i]=c;
	}
}



int main()
{
	char a[100],b,c;
	printf("enter a string\n");
	scanf("%s",a);

	printf("enter a char:\n");
	scanf(" %c",&b);
	
	printf("enter a character to replace\n");
	scanf(" %c",&c);


	replace(a,b,c);

	printf("after replaced\n%s\n",a);
	return 0;
}


