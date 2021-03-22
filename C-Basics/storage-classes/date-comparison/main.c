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
		if(i==0) //initialization 
		{
		d2=d;
		m2=m;
		y2=y;
		}
		while(1)
  		{
  		temp = IsLeapYear(y);
		if(temp==1 && d==29 && m==2) // temp=1 if its leapyear
			temp1=IsValidDate(d-1,m,y);
		else
			temp1=IsValidDate(d,m,y);
		if(temp1==1) // temp1=0 if its valid
		{
			printf("Date is invalid, plz enter valid date:");
			scanf("%d-%d-%d",&d,&m,&y);
		}
		else
			break;
		}
		
		temp2= DateCompare(d,m,y,d2,m2,y2);
		if(temp2==0)
		{
		
			d2=d;
			m2=m;
			y2=y;
			
		}
	}

	PrintDateinFormat(d2,m2,y2);

	return 0;

}
		

		



