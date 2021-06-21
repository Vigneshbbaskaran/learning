#include<stdio.h>
#include<stdlib.h>
typedef struct key
{
	int id;
	char name[20];
	struct key *next;
	struct key *pre;
}key;
int node;

key * createnode()
{
	key *n;
	n=malloc(sizeof(key));
	printf("total available node:%d\n",node);
	printf("\n\tenter number :");
	scanf("%d",&n->id);
	printf("\tenter your name :");
	scanf("%s",n->name);
	node++;
	n->pre=NULL;
	n->next=NULL;
	return n;
}
void traversal(key *h)
{

	int count=1;
	key *temp=h;
	while(h)
	{	
		printf("Node no:%d",count);
		printf("\n\tId:%d\n",h->id);
		printf("\tname:%s\n",h->name);
		h=h->next;
		count++;
	}
}
void delete(key **head)
{
	int p;
	key *delete=NULL,*temp=*head;
	printf("Enter position: ");
	scanf("%d",&p);
	if(p>(node) || p<0)
	{
		printf("\nenter a valid number...!!\n");
		return;
	}
	if(p==1)
	{
		if(temp->next==NULL)
		{
			free(temp);
			node--;
			*head=NULL;
				return;
		}
		else
		{
			delete=*head;
			temp=temp->next;
			temp->pre=NULL;
			free(delete);
			node--;
			*head=temp;
			return;
		}

	}
	else
	{ 	int i;
		for(i=1;i<p-1;i++)
		{
			temp=temp->next;
		}
		delete=temp->next;

		temp->next=delete->next;
		free(delete);
		node--;
		delete=temp->next;
		delete->pre=temp;
		return;
	}

}
void key1(key *h)
{
	int i=node,id;
	key *new=NULL,*last=h;
	printf("\nenter ID :");
	scanf("%d",&id);
	new=createnode();
	{
		while(last->id!=id)
		{	last=last->next;
			i--;
			if(i==0)
			{	printf("\nEntered key NOT valid\n");
				return;
			}
		}
		new->next=last->next;
		last->next=new;
		new->pre=last;
		if(new->next!=NULL)
		{
			last=new;
			new=new->next;
			//-----
			new->pre=last;
		}
	}

}

void insert(key **head)
{
	int p,i;
	key *new=NULL,*last=*head;
	printf("Enter position: ");
	scanf("%d",&p);
	if(p>(node+1) || p<0)
	{
		printf("\nenter a valid number...!!\n");
		return;
	}
	new=createnode();
	if(p==1)
	{	if(*head==NULL)
		{
			*head=new;
		return;
		}

		last->pre=new;
		new->next=last;
		new->pre=NULL;
		*head=new;
	}
	else
	{
		for(i=1;i<p-1;i++)
		{
			last=last->next;
		}

		new->next=last->next;
		last->next=new;
		new->pre=last;

		if(new->next==NULL)
		{
			return;
		}
		last=new;
		new=new->next;
		new->pre=last;
		
	}	
}


int main()
{	int a;
	key *new=NULL,*head=NULL,*last=NULL;
	
	while(1)
	{

		new = createnode();
		if(head==NULL)
			head=new;
		else
		{	
			last->next=new;
			new->pre=last;
		}
		last=new;
		printf("Press 1 to continue\n");
		scanf("%d",&a);
		if(a!=1)
			break;
	}
	traversal(head);
	while(1)
	{	printf("\n\nTotal Available nodes  :%d",node);
		printf("\nSELECT:\n\t1.INSERT\n\t2.DELETE\n\t3.KEY\n\t4.TRAVERSAl\n\t5.exit\n---->");
		scanf("%d",&a);
		if(a==1)
		{	
			insert(&head);
		}
		if(a==2)
			delete(&head);
		if(a==3)
			key1(head);
		if(a==4)
			traversal(head);
		if(a==5)
			break;
		if(a<0 || a>5)
			printf("enter valid number..!!\n");		
	}
}

