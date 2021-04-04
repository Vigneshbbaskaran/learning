#include<stdio.h>

#define MAX(dt) dt max##dt(dt a, dt b, dt c)\
				{\
				return ((a>b)?(a>c?a:c):(b>c?b:c));\
				}
				
MAX(int)

MAX(float)

MAX(char)

int main()
{
int a,b,c;

printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);

printf("\nint  : %d",maxint(a,b,c));
printf("\nfloat: %.2f",maxfloat(a,b,c));
printf("\nchar: %c\n",maxchar(a,b,c));

return 0;
}

