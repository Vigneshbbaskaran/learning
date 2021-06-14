/*
1.string-length
*/
#include<stdio.h>
int strlen (char *st1);
int main()
{
	char st1[100];
	int a;
	printf("enter a string:\n");
	scanf("%[^\n]s",st1);
	a=strlen(st1);

	printf("\nstring length = %d\n", a);

	return 0;
}

int strlen(char *st1)
{
	int i;
	for(i=0;*(st1+i)!='\0';i++);
	return i;
}

