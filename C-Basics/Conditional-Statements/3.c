#include<stdio.h>
int main()
{
int a,b,c;
    printf("enter three nubers\n");
    scanf("%d%d%d",&a,&b,&c);   

if (a >= b)
    {
        if (a >= c)
            printf("%d is the largest number.\n", a);
        else 
            printf("%d is the largest number.\n", c);
   
    }
    else
    {
        if (b >= c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }
return 0;
}
