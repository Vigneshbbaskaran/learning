#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k=0;
	  int  arr[5]={6,1,2,4,3};
	int a;
	for(i=0;i<5;i++)
	{	
				k=0;
				for(j=0;j<5-1-i;j++)
				{
				if(arr[j]>arr[j+1])
				{
				k=1;
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
				}
				}
				
			if(k==0)
			break;
	}	
		for(i=0;i<5;i++)
		printf("%d\n",arr[i]);

}
