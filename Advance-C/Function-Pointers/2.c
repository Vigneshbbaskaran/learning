#include<stdio.h>
void add1(int a,int b)
{
        printf("\n%d+%d :%d",a,b,a+b);
}
void sub1(int a,int b)
{
        printf("\n%d-%d :%d",a,b,a-b);
}
void mul1(int a,int b)
{
        printf("\n%d*%d :%d",a,b,a*b);
}
void div1(int a,int b)
{
        printf("\n%d/%d :%d",a,b,a/b);
}
void rem1(int a,int b)
{
        printf("\n%d%%%d :%d\n",a,b,a%b);
}

int main()
{
        void (*calc[])(int,int)={add1,sub1,mul1,div1,rem1};


        int a,b,i;
        printf("\nEnter a: ");
        scanf("%d",&a);
        printf("\nEnter b: ");
        scanf("%d",&b);

        (*calc[0])(a,b);
        (*calc[1])(a,b);
        (*calc[2])(a,b);
        (*calc[3])(a,b);
        (*calc[4])(a,b);

}

