#include<stdio.h>
int main()
{
int a,b,c;
int *p1, *p2, *p3;
    printf("enter three nubers\n");
    scanf("%d%d%d",&a,&b,&c);   
p1=&a;
p2=&b;
p3=&c;
if (*p1 >= *p2)
    {
        if (*p1 >= *p3)
            printf("%d is the largest number\n", *p1);
        else 
            printf("%d is the largest number\n", *p3);
   
    }
    else
    {
        if (*p2 >= *p3)
            printf("%d is the largest number\n", *p2);
        else
            printf("%d is the largest number\n", *p3);
    }
return 0;
}

