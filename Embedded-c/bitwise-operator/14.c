/*14. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

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
