#include<stdio.h>

#define isalphanum(a) ((a>= 'a' && a<= 'z') ||( a>= 'A' && a<= 'Z')|| (a>='0' && a<='9'))


int main()
{
	char a;
	printf("\nenter a character :");
	a=getchar();

	if(isalphanum(a))
		printf("\nentered char is alphanumeric\n");
	else
		printf("\nentered char is not alphanumeric\n");

	return 0;
}
