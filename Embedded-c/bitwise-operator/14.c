#include<stdio.h>

void print_binary(int temp)
{
	int i;
	for(i=0;i<32;i++)
	{
		if(i%4==0)
		{
		printf(" ");
		}
		if(temp & (0x01<<31))
			printf("1");
		else
			printf("0");
		temp=temp<<1;
	}
	printf("\n");
}

int functionsetbits(unsigned int x,int p,int n,unsigned int y)
{	int i;	
	printf("\nbefore mask bit clear x:");
	print_binary(x);
	for(i=1;i<=n;i++) //clearing mask bit
	{
		x = x & ~(0x01 << (p-i));
	}	
	
	printf("\nafter mask bit clear x:");
	print_binary(x);
	printf("\noriginal y            :");
	print_binary(y);

	y= y<<(32-n);
	printf("\nleft clear y          :");
	print_binary(y);

	y= y>>(32-p);
	printf("\nback to position y    :");
	
	print_binary(y);
	
	x=x|y;	
	
	
	return x;
}


int main()
{

unsigned int x,y,n,p;
printf("enter x:\n");
scanf("%d",&x);

printf("enter y:\n");
scanf("%d",&y);

printf("\nx:");
print_binary(x);

printf("\ny:");
print_binary(y);

printf("\nenter no of bits :");
scanf("%d",&n);

printf("\nenter position:");
scanf("%d",&p);



	x = functionsetbits(x,p,n,y);

	printf("\nx                     :");
	print_binary(x);

	printf("\nx:%d\n",x);

	
return 0;
}
