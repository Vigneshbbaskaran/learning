#include<stdio.h>
int main()
{
int a;
printf("enter a signed number:\n");
scanf("%d",&a);

if(a>=0)
	printf("\nremoved sign vaue :%d\n",a);
else
{
	a*=-1;
	printf("\nremoved sign value :%d\n",a);
}

return 0;
}
