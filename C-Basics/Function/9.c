#include<stdio.h>
int date(int ,int ,int ,int ,int ,int);
int main()
{
int a,b,c,a1,b1,c1,i=0;

printf("enter date in dd-mm-yyyy format:\n");
scanf("%d-%d-%d",&a,&b,&c);

printf("enter another date to compare in same format:\n");
scanf("%d-%d-%d",&a1,&b1,&c1);
 
i = date(a,b,c,a1,b1,c1); 
if (i==0)
	printf("%d-%d-%d is older\n",a,b,c);
else if(i==1)
	printf("%d-%d-%d is older\n",a1,b1,c1);
else if(i==2)
	printf("\n%d-%d-%d both date same\n",a,b,c); // incase both date same
else if(i==3)
	printf("invalid...!!!\n");
return 0;
}

int date(int a,int b, int c,int a1, int b1,int c1)
{


if(a<=31 && a>=00 && b<=12 && b>=00 && c>=00 ) // checking valid day, month and year
{
	if(c>c1)
		return 1;
	else if(c==c1) // incase both year same, check further detail
	{
		if(b>b1)
			return 1;
		else if(b==b1) // incase both month same, check further detail
		{
			if(a>a1)
				return 1;
			else if(a==a1)
				return 2;
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}
else
 	return 3;
}

