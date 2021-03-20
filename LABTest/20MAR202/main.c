#include<stdio.h>
int IsValidDate(int,int,int);
int IsLeapYear(int);
int DateCompare(int,int,int,int,int,int);
void PrintDateinFormat(int,int,int);
void PrintSubscript(int);

int main()
{
	int i,n,d,m,y,d2=0,m2=0,y2=0,temp,temp1,temp2;
	printf("Number of candidate:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Date of birth of candidate#%d:",i+1);
		scanf("%d-%d-%d",&d,&m,&y);
  		again:temp = IsLeapYear(y);
		if(temp == 1)
			temp1=IsValidDate(d,m-1,y);
		else
			temp1=IsValidDate(d,m,y);
		if(temp1==1)
		{
			printf("Date is invalid, plz enter valid date:");
			scanf("%d-%d-%d",&d,&m,&y);
			goto again;
		}
		
		temp2= DateCompare(d,m,y,d2,m2,y2);
		if(temp2==1)
		{
			d2=d;m2=m;y2=y;
		}
	}

	PrintDateinFormat(d2,m2,y2);

	return 0;

}
		

		



