/*1)Write a program to take input for two character variables using pointers and find out and print which character has higher ascii value.
*/
#include<stdio.h>
int main()
{
	char a,b;
	char *ptr1, *ptr2;

	printf("enter a character:\n");
	scanf("%c",&a);
	printf("enter another character:\n");
	scanf(" %c",&b);

	ptr1= &a;
	ptr2= &b;

	if(*ptr1 > *ptr2)
		printf("First char has highest ASCII value\n");
	else if(*ptr1 < *ptr2)
		printf("Second char has highest ASCII value\n");

	return 0;
}


	



