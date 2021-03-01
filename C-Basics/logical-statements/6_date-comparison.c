#include<stdio.h>
int main()
{
int a,b,c,a1,b1,c1;

printf("enter date in dd-mm-yyyy format:\n");
scanf("%d-%d-%d",&a,&b,&c);

printf("enter another date to compare in same format:\n");
scanf("%d-%d-%d",&a1,&b1,&c1);
if(a<=31 && a>=00 && b<=12 && b>=00 && c>=00 ) // checking valid day, month and year
{
	if(c>c1)
	printf("\n%d-%d-%d is older date\n",a1,b,c1);
	else if(c==c1) // incase both year same, check further detail
	{
		if(b>b1)
		printf("\n%d-%d-%d is older date\n",a1,b1,c1);
		else if(b==b1) // incase both month same, check further detail
		{
			if(a>a1)
				printf("\n%d-%d-%d is older date\n",a1,b1,c1);
			else if(a==a1)
			    printf("\n%d-%d-%d both date same\n",a,b,c); // incase both date same
			else
				printf("\n%d-%d-%d is older date\n",a,b,c); 
		}
		else
		printf("\n%d-%d-%d is older date\n",a,b,c);
	}
	else
	printf("\n%d-%d-%d is older date\n",a,b,c);
}
else
	printf("\ninvalid input..!! Check month and day\n") ;
return 0;
}

