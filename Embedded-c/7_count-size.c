/*7. WAP to implement the sizeof operation using the bitwise operator.
*/
#include<stdio.h>
	

int main()
{
int x,count;
	x=1;
	while(x!=0)
		{
			x=x<<1;
			count++;
		}
	printf("byte:%d\n",count/8);
return 0;
}
	
		
		
