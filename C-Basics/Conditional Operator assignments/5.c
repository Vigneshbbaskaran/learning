#include<stdio.h>
int main()
{
	char a;
	printf("enter a character \n");
	scanf("%c",&a);

	 ( a>=65 && a<=90) ? printf("%c\n", (a+32)) : ( (a>=97 && a<=122) ? printf("%c\n", a-32) : printf("INVALID..!!\n") );

	return 0;
}
