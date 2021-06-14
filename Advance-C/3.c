#include<stdio.h>
int main()
{

	char a,b;

	printf("Enter a:\n");
	scanf("%c",&a);

	printf("Enter b:\n");
	scanf(" %c",&b);

	if(a>b)
		printf("%c has highest ASCII value\n",a);
	else if(a<b)

		printf("%c has highest ASCII value\n",b);
	else
		printf("Both have same ASCII value\n");
}
