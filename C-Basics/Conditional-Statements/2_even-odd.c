#include<stdio.h>
int main()
{
int a, temp;
printf("enter the number\n");
scanf("%d",&a);

temp= a%2;

if(temp==0)
    printf("%d is a even number\n",a);
else
    printf("%d is a odd number\n",a);

return 0;
}
