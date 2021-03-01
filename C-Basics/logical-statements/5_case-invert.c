#include<stdio.h>
int main()
{
char a;
printf("enter a alphabet:  ");
scanf("%c",&a);

if(a>=97 && a<=122)
	printf("\ninverted case :  %c\n",a-32);
	
else if(a>=65 && a<=90)
	printf("\ninverted case :  %c\n",a+32);
else
	printf("\ninvalid input\n");

return 0;
}
