#include<stdio.h>
#include<stdlib.h>
typedef struct rec
{
	int id;
	int node1;
	struct rec *link;
}rec;

int node;

rec* createnode()
{
	rec *new=NULL;
	new=(rec *)malloc(sizeof(rec));
	printf("\t");
	scanf("%d",&new->id);
	if(new->id<0)
	{	
		free(new);
		return NULL;
	}
	node++;
	new->node1=node;	
	return new;
}

void reverse(rec *h)
{	
	int a,node2;
//	printf("hellow\n");
	if(h==NULL)
		return;
	a=h->id;
	node2=h->node1;
	h=h->link;

	reverse(h);
	printf("\n Node:%d\tId:%d",node2,a);
	node--;
	return;

}
void traversal(rec *h)
{	
	while(h)
	{
		printf("\n Node:%d\tID:%d",h->node1,h->id);
		h=h->link;
	}

}


int main()
{
	rec *head=NULL,*last=NULL,*new=NULL;
	printf("\n\nEnter numbers:\n");

	while(1)
	{
		new=createnode();
		if(new==NULL)
			break;
		if(head==NULL)
			head=new;
		else
			last->link=new;
		last=new;
	}
	if(node==0)
		printf("\nNo Node to perform Operations\n");
	else
	{
		printf("\nTotal available node:%d\nEntered Nodes:\n",node);
		traversal(head);
		printf("\n\nReversed:\n");
		reverse(head);
		printf("\n");
	}
}

