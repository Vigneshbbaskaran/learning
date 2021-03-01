#include <stdio.h>

int main()
{
int a,b,c,d,temp;
printf("Enter four values for comparison\n ");
scanf("%d %d %d %d", &a, &b, &c, &d);

if (a > b)
{
    if (a > c) 
    {
      if (a > d)
        temp = a;
      else
        temp = d;
    } else
    {
      if (c > d)
        temp = c;
      else
        temp = d;
    }

}
else
{
    if (b > c) 
    {
      if (b > d)
        temp = b;
      else
        temp = d;
    }
    else 
    {
      if (c > d)
        temp = c;
      else
        temp = d;
    }
  }

printf("\n %d is the bigest number", temp);

  return 0;
}
