#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	struct student *link;

}student;
int node;

student* createnode1()
{
	student *n=(student *)malloc(sizeof(student));
	printf("Total Available Nodes :%d\n",node);
	printf("\tenter Id:");
	scanf("%d",&n->ID);
	n->link=NULL;
	node++;
	return n;
}

void traversal(student *h)
{		student *temp=h;
		if(node==0)
		{
			printf("No node left\n");
			return;
		}
		int i=1;
		do
		{
			printf("\nNode %d\t",i);
			printf("Id:%d\n",h->ID);
			h=h->link;
			i++;
		}while(temp!=h);
}
void INSERT(student **h)
{	
		int i,p;
		student *new=NULL,*last=*h;
		printf("Enter Position: ");
		scanf("%d",&p);
		if(p>(node+1))
		{
			printf("enter valid node\n");
			return;
		}
		new = createnode1();
		if(p==1)
		{
			new->link=*h;
			*h=new;
		}
		else
		{
			for(i=1;i<p-1;i++)
			{	
				last=last->link;
			}
			new->link=last->link;// link next to new node copied to new  node
			last->link=new;// cut  the  link
		}

}
void DELETE(student **h)
{	if(node==0)
		{
			printf("No node left to delete\n");
			return;
		}
	student *delete=NULL,*temp=*h;
	int p;
	printf("Enter the poisition: ");
	scanf("%d",&p);
	if(p==1)
	{	
		if(temp->link==NULL)
		{
				free(temp);
				node--;
				*h=NULL;
		}
		else
		{
				delete=*h;
				temp=temp->link;
				free(delete);
				node--;
				*h=temp;

		}
	}
	else
	{
		int i;
		for(i=1;i<p-1;i++)
		{
			temp=temp->link;
		}
		delete=temp->link;
		temp->link=delete->link;
		free(delete);
		node--;
	}

}

int main()
{
	char c = 'Y';
	student *head=NULL,*new =NULL,*last=NULL;
	while(c == 'y' || c== 'Y')
	{
		new = createnode1();
		if(head==NULL)
		{
			head=new;
			new->link=head;
		}
		else 
			last->link=new;
		new->link=head;
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
		printf("Choose:\n\t1.INSERT\n\t2.DELETE\n\t3.Traversal\n\t4.EXIT\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				INSERT(&head);
				break;
			case 2:
				DELETE(&head);
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
