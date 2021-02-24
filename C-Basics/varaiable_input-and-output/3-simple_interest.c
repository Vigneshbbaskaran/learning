//3)Calculation of simple interest.

#include<stdio.h>
int main()
{
	int p,n;
	float m,r,si;
	printf("please enter principle,time in months and rate of interest\n");
	scanf("%d%f%f",&p,&n,&r);
	m=n/12.0;
	printf("\n m=%f \n", m);
	si=p*m*r/100;
	printf("simple interest= %f\n", si);
	return 0;
}