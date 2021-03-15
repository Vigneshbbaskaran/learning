#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter the last number\n");
	scanf("%d",&b);
	temp=a;
	printf("Even numbers: ");
	while(temp<b)
	{
		if(temp%2==0)
		{
			printf("%d ",temp);
			temp=temp+2;
		}
		else
			temp=temp+1;
		
	}
        temp=a;
	printf("\nODD nubers: ");
	while(temp<b)
        {
                if(temp%2==1)
                {
                        printf("%d ",temp);
                        temp=temp+2;
                }
                else
                        temp=temp+1;

        }
return 0;
}
			
