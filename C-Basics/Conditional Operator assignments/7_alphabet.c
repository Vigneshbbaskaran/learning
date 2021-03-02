#include<stdio.h>
int main()
{
	char a;
	printf("enter a character \n");
	scanf("%c",&a);

	 ( a>=65 && a<=90) ? printf("ALPHABET\n") : ( (a>=97 && a<=122) ? printf("ALPHABET\n") : printf("NOT ALPHABET\n") );

	return 0;
}
