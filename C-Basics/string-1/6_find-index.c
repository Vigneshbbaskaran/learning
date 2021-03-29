/*
6)Write a function called strstr that takes 2 strings as input, finds the first occurrence of second string, in the first string, and returns the index from where it starts in the first string. If the string is not found, returns -1.

eg., Kernel Masters
	Mast
output : 7
*/
#include<stdio.h>
int index(char a[100],char b[100]);
int main()
{
	char a[100],b[100];

	printf("enter a string:\n");
	scanf("%[^\n]s",a);

	printf("enter another string for search\n");
	scanf("%s",b);
	int temp;
	temp = index(a,b);
	printf("\nfound at %d\n",temp);

	return 0;
}
int index(char a[100],char b[100])
{
int i;
	for(i=0;a[i]!='0';i++)
	{
			if(a[i]==b[0])
			{	break;
			}
	}
	return i;
}
