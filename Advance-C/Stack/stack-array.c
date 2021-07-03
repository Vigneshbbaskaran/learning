#include<stdio.h>
void push(int arr[],int *top)
{
	int temp;
	if(*top == 9)
       	{
 		printf("Stack is full\n");
		return;
	}
	else
	{
		printf("ENter element to enter\n");
		scanf("%d",&temp);
		++(*top);
		arr[*top]=temp;
		return;
	}	

}
void pop(int arr[],int *top)
{
	int temp;
	if(*top == -1)
       	{
 		printf("Stack is Empty\n");
		return;
	}
	else
	{
		

		temp=arr[*top];
		printf("element :%d\n",temp);
		--(*top);
		return;
	}
}

int main()
{
	int arr[10],top=-1,a;
        while(1)
        {
		printf("\nPick any one:\n\t1.Push\n\t2.POP\n\t3.EXIT\n");
		scanf("%d",&a);
		switch (a)
		{
			case 1:
				push(arr,&top);
				break;
			case 2:
				pop(arr,&top);
				break;
			default:
				goto exit;
		}
        }	 
	exit:
		printf("\n");	
}

