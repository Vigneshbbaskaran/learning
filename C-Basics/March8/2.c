#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,s6;
float temp;
printf("enter six subject marks\n");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);

temp=(s1+s2+s3+s4+s5+s6)/6.0;
printf("percentage:%.2f%%\nGrade:",temp);
if(temp<100)
{
	if(temp>=80)
		printf("Honours\n");
	else if(temp>=60)
		printf("First Division\n");
	else if(temp>=50)
		printf("Second Division\n");
	else if(temp>=40)
		printf("Third Division\n");
	else 
		printf("Fail\n");
}
else
{
printf("invalid input\n");
}
return 0;
}

