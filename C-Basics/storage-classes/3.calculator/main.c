
#include<stdio.h>
int a,b;
int add(void);
int sub(void);
int mul(void);
float div(void);
int mod(void);
void operation(char);

int main()

{	char c;
	printf("\nallowed operators for calculation '+' '-' '*' '/' '%%'\n\nenter number in this Format: num1 'operator' numb2\n");
	scanf("%d%c%d",&a,&c,&b);

	operation(c);
	return 0;
}



