#include<stdio.h>
int main()
{
	int a,temp,count=0;
	printf("enter a number\n");
	scanf("%d",&a);
	
while(1)
{      
   if (a=='\0')
   	   break;
   a = a/10;
   count++;
}
printf("Total digit =%d\n",count);

return 0;
}


	

