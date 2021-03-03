#include<stdio.h>
int main()
{
int a,temp;

printf("enter the percenage \n");
scanf("%d",&a);

temp = (a<=100 && a>=80) ? 0 : (a<=79 && a>=60) ? 1 : (a<=59 && a>=50) ? 2 : (a<=49 && a>=40) ? 3 : (a<=39 && a>=00) ? 4 : 5 ;

switch(temp)
{
case 0:
	printf("HONOURS\n");
	break;
case 1:
	printf("FIRST DIVISION\n");
	break;
case 2:
	printf("SECOND DIVISION\n");
	break;
case 3:
	printf("THIRD DIVISION\n");
	break;
case 4:
	printf("FAIL\n");
	break;
case 5:
	printf("INVALID INPUT..!!\n");
	break;
}
return 0;
}
