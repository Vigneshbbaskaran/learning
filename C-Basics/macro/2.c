/*2) Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting.
*/
#include<stdio.h>

#define MAX(x,y) x>y?1:0
void order(int a[10]);

int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}

	order(a);
	for(i=0;i<10;i++)
		printf("\na[%d]=%d",i,a[i]);
	printf("\n");

	return 0;
}

void order(int a[10])
{
	int i,temp,j=1;
	while(j)
	{
	for(i=0;i<9;i++)
	{
		temp = 0;
		temp = MAX(a[i],a[i+1]);
		if(temp==1)
		{	
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<9;i++)
		{
		temp=MAX(a[i],a[i+1]);
			if(temp==0)
				{
				j=0;
				
				}
			else
			{
				j=1;
				break;
			}
			
		}	
			
		
	}
}
