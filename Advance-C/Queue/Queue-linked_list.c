#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
	int ID;
	struct queue *link;

}queue;
queue *r;
int node;

queue* createnode1()
{
	queue *n=(queue *)malloc(sizeof(queue));
	printf("Total Available Nodes :%d\n",node);
	printf("\tenter Id:");
	scanf("%d",&n->ID);
	n->link=NULL;
	node++;
	return n;
}

void traversal(queue *h)
{
		if(node==0)
		{
			printf("No node left\n");
			return;
		}
		int i=1;
		while(h)
		{
			printf("\nNode %d\t",i);
			printf("Id:%d\n",h->ID);
			h=h->link;
			i++;
		}
}
void push(queue **head)
{
	queue *new,*last=*head;
	new=createnode1();
	r->link=new;
	r=new;
	
}
void pop(queue **head)
{	if(node==0)
		{
			printf("-x-x-x-x-x-x-NO node-x-x-x-x-x-x\n");
			return;
		}
        queue *temp=*head,*last=*head;
	printf("element :%d\n",last->ID);
        last=last->link;
	free(temp);
	node--;
	*head=last;
}

int main()
{
	char c = 'Y';
	queue *head=NULL,*new =NULL,*last=NULL;
	while(c == 'y' || c== 'Y')
	{
		new = createnode1();
		if(head==NULL)
			head=new;
		else 
			last->link=new;
		r=new;
		last=new;
		printf("New node? Y?N:\t");
		scanf(" %c",&c);
		printf("\n");
	}
	printf("Entered NOde Info:\n");
	traversal(head);
	int a;
	while(1)
	{
		printf("Choose:\n\t1.PUSH\n\t2.POP\n\t3.Traversal\n\t4.EXIT\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				push(&head);
				break;
			case 2:
				pop(&head);
				break;
			case 3:
				traversal(head);
				break;
			default:
				goto exit;
		}
	}	
	exit:	
	;
}	
