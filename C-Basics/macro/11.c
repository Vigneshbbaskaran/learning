#include<stdio.h>
#define swap(fn,dt) void fn(dt *a,dt *b)\
	{\
	dt temp=*a;\
	*a=*b;\
	*b=temp;\
	}
swap(swap_int,int)
swap(swap_float,float)
swap(swap_char,char)
int main()
{
	
	int dt;

	printf("enter datatype\nEnter '1' for :int\nEnter '2' for :float\nEnter '3' for :char\n");
	scanf("%d",&dt);
	
	if(dt==1)
	{	int a,b;
	printf("enter int values\n");
		scanf("%d%d",&a,&b);
		swap_int(&a,&b);
		printf("swapped values\n%d\n%d\n",a,b);
	}
	else if(dt==2)
        {       float a,b;
        printf("enter float values\n");
                scanf("%f%f",&a,&b);
		swap_float(&a,&b);
		printf("swapped values\n%.2f\n%.2f\n",a,b);
        }
	else if(dt==3)
        {       char a,b;
        printf("enter character values\n");
                scanf(" %c %c",&a,&b);
		swap_char(&a,&b);
		printf("swapped values\n%c\n%c\n",a,b);
        }
        else 
        	printf("\nINVALID INPUT..!!\n");
        
	return 0;
}

	
