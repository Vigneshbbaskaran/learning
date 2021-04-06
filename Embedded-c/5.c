#include<stdio.h>

int  main()
{
	int a,b;
	printf("enter A: ");
	scanf("%d",&a);
	printf("\nenter B: ");
	scanf("%d",&b);

	

	printf("\nA-B:%d\n",a-(~b+1));

	return 0;
}
	
