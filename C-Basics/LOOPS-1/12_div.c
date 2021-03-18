//12)Find the quotient result of a division operation for 2 input integers, without using / operator. Also print reminder without using % operator.

#include<stdio.h>
int main()
{
	int a,b,i=1,count=0,temp=0,remain;
	printf("enter 2 number\n");
	scanf("%d%d",&a,&b);
	temp=a;
	if(a>=b)
	{
		while(i)
		{	temp= temp-b;
			remain=temp;
			count++;
			if(temp<b)
				i=0;
		}
	}
	else
		remain=a;
	printf("Quotient = %d\nremainder = %d\n", count, remain);
	return 0;
}


