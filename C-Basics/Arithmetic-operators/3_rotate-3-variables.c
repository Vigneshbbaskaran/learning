#include<stdio.h>
int main()
{
int a,b,c,temp;
printf("enter three numbers a,b and c:\n");
scanf("%d%d%d",&a,&b,&c);
temp =c;
c= b;
b=a;
a=temp;
printf("rotated values ==> a:%d b:%d c:%d\n",a,b,c);
	return 0;
}
