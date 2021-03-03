#include<stdio.h>
int main()
{
int a,b;
printf("enter a and b :\n");
scanf("%d%d",&a,&b);
switch(a>=b)
{
case 1:
	printf("%d is bigger\n",a);
	break;
case 0:
	printf("%d is bigger\n",b);
	break;
}

return 0;
}


