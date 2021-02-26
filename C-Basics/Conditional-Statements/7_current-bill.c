#include<stdio.h>
int main()
{
int a;
float temp;
printf("enter the units consume\n");
scanf("%d",&a);

if(a>=0)
{
	if(a<=200)
	{
		printf("cost:100/-\n");
	}
	else if(a>600)
	{	
		temp=390+(a-200);
		printf("cost:%.2f/-\n",temp);
	}
	else if(a>400)
	{
		temp=230+((a-200)*0.85);
		printf("cost:%.2f/-\n",temp);
	}	
	else if(a>200)
	{
		temp=100+((a-200)*0.65);
		printf("cost:%.2f/-\n", temp);			
	}    
}
else
   {
	printf("enter a valid units..!!\n");
   }
return 0;
}
