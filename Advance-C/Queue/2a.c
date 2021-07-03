#include<stdio.h>
#include<stdlib.h>
int r,f;

void push(int arr[])
{
	int temp;
	if(r == 10)
       	{
 		r =0;
	}
	if(arr[r]==NULL)
	{	
		printf("ENter element to enter\n");
		scanf("%d",&temp);

		arr[r]=temp;
		(r)++;
		return;
	}
	else
		printf("Queue FULL\n");
}

void pop(int arr[])
{
	int temp;
	if(f==10)
		f=0;
	if(arr[f] == NULL)
       	{	printf("Queue is Empty\n");
		return;
	}
	else
	{
		temp=arr[f];
		arr[f]=NULL;
		printf("element :%d\n",temp);
		(f)++;
		return;
	}
}

int main()
{
	int arr[10]={1},a,i;
	arr[0]=NULL;
        while(1)
        {
		printf("\nPick any one:\n\t1.Push\n\t2.POP\n\t3.Print all element\n\t4.EXIT\n");
		scanf("%d",&a);
		switch (a)
		{
			case 1:
				push(arr);
				break;
			case 2:
				pop(arr);
				break;
			case 3:
				for(i=0;i<10;i++)
					printf("%d\t",arr[i]);
				break;
			default:
				goto exit;
		}
        }	 
	exit:
		printf("\n");	
}

