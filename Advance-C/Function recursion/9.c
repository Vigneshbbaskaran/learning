#include<stdio.h>
#include<math.h>
void call(int a)
{
	static unsigned int z,i=1;

	if(a==0)
	{
		printf("\nbinary : %u\n",z/10);
		return;
	}
	z = z+(10*i*(a%2));
	
//	printf("\n\nPassed a:%d\n\tz:%u\n",a,z);
	i=i*10;
	a=a/2;
//	printf("\ta:%d",a);
	return call(a);
}


int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);

	call(a);
}
