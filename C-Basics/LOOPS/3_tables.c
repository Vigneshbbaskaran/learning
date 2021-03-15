//3) Read a number and print its multiplication table.


#include<stdio.h>
int main()
{
	int i,num;
	printf("enter number\n");
	scanf("%d",&num);
	i=1;
	while(i<=10)
	{
		printf("%d*%d = %d\n",num,i,i*num);
		i++;
	}
	return 0;
}

