#include<stdio.h>
int main()
{
int a,b;
printf("enter a and b :\n");
scanf("%d%d",&a,&b);
switch(a>b? 1 : (a<b ? 0 : 2 ))
{
case 1:
	printf("%d is bigger\n",a);
	break;
case 0:
	printf("%d is bigger\n",b);
	break;
case 2:
	printf("Both number are same\n");
	break;
}

return 0;
}


