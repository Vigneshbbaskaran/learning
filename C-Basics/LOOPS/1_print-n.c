//1)WaP to print all numbers from 1 to n.



#include <stdio.h>
int main()
{
	int i=0,n;
	printf("enter the n value:\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d\n",i+1);
		i++;
	}
	return 0;
}
