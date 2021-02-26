#include<stdio.h>
int main()
{
	int a,b;
	printf("enter A:\n");
	scanf("%d",&a);
	printf("enter B:\n");
	scanf("%d",&b);

	if(a>b)
		printf("A is greater\n");
	else if(a<b)
		printf("B is greater\n");
	else
		printf("Both equal\n");

	return 0;

}
	
