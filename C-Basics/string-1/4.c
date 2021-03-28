#include<stdio.h>
void expansion(int a);
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);

	expansion(a);

	printf("\n");

	return 0;
}

void expansion(int b)
{
	int i=0,j=1,temp;
	char a[100];
	for(i=0;i<100;i++)
	{
	if(b==0)
		break;

		a[i]=b%10;
		b=b/10;
	}
	j=i;	
	int x=0;
	for(;i!=0;i--)
	{	
		if(x!=0)
			printf(" ");
		j--;
		x++;
		temp=a[j];
		switch(temp)
		{
			case 0:
				printf("zero");
				break;
			case 1:
                                printf("one");
                                break;
			case 2:
                                printf("two");
                                break;
			case 3:
                                printf("three");
                                break;
			case 4:
                                printf("four");
                                break;
			case 5:
                                printf("five");
                                break;
			case 6:
                                printf("six");
                                break;
			case 7:
                                printf("seven");
                                break;
			case 8:
                                printf("eight");
                                break;
			case 9:
                                printf("nine");
                                break;
		}
	}
}

