#include<stdio.h>
int main()
{
	int a;
	printf("enter 4 digit number\n");
	scanf("%d",&a);
	printf("%d\b\b\b   \n",a);   // each back space moves the cursor one left(didnt edit any content) and replaced by the white space
	printf("%d\b\b  \n",a);
	printf("%d\b \n",a);
	printf("%d\n",a);
	return 0;
}


