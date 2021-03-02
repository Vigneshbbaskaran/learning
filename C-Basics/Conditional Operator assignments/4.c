#include<stdio.h>
int main()
{
	float a;
	printf("enter the calls\n");
	scanf("%f",&a);

	a<=100 ? printf("250/-\n") : printf("%.2f/-\n",250+((a-100)*1.25));

	return 0;
}
