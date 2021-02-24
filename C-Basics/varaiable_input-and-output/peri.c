#include<stdio.h>
int main()
{
int l,w;
printf("Enter the length and width of the rectangle:\n");
scanf("%d%d", &l,&w);
printf("area = %d and perimeter = %d \n",l*w,(2*l)+(2*w));
return 0;
}
