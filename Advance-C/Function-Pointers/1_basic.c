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
        void (*add)(int,int)=&add1;
        void (*sub)(int,int)=&sub1;
        void (*mul)(int,int)=&mul1;
        void (*div)(int,int)=&div1;
        void (*rem)(int,int)=&rem1;


        int a,b;
        printf("\nEnter a: ");
        scanf("%d",&a);
        printf("\nEnter b: ");
        scanf("%d",&b);

        (*add)(a,b);
        (*sub)(a,b);
        (*mul)(a,b);
        (*div)(a,b);
        (*rem)(a,b);

}

