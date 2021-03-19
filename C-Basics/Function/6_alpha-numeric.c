//6)Write a function to determine if a character is alphanumeric or not. 
//Hint: int fun_alpha_num(char c)

#include<stdio.h>
int fun_alpha_num(char c);

int main()
{
	int i;
	char c;
	printf("enter a char\n");
	c = getchar();

	i=fun_alpha_num(c);
	i==1 ? printf("alphanumeric\n") : printf("Not alphanumeric\n"); 
	return 0;
}

int fun_alpha_num(char c)
{
	int i=0;
	if( (c>=65 &&  c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57) )
	       i=1;
	return i;
}
