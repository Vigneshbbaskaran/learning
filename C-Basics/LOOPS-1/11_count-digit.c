/*11)Write a program to input a number and count the digits in it.
Eg. 
0 - number of digits 1
12 – number of digits 2
155 – number of digits 3
*/
#include<stdio.h>
int main()
{
	int a,temp,count=0;
	printf("enter a number\n");
	scanf("%d",&a);
if(a==0)
	count=1;
else
{
	while(1)
	{  
  	   if (a=='\0')
   	   break;
	   a = a/10;
	   count++; 
	}
}
printf("Total digit =%d\n",count);

return 0;
}


	

