#include<stdio.h>
#include<stdlib.h>
typedef struct sort
{
	int num;
	struct sort *link;
}sort;
int node,x;

void reverse(sort **h);
void remove_duplicate(sort *head)
{
	int i;
	sort *p=head,*q=NULL;
	q=p->link;
//	printf("test1\n");
	if(head==NULL)
		return;
	if(head->link==NULL)
		return;
//
//for(i=0;i<node-1;i++)
	while(q)
	{
		if(p->num == q->num)
		{
			p->link=q->link;
			
//	printf("test2\n");
			free(q);
//	printf("test3\n");
			q=p->link;
//	printf("test4\n");
		}
		else
		{if(q==NULL)
			return;
		//-----
		//step frw
		
		p=q;
//	printf("test5\n");
		q=q->link;	
//	printf("test6\n");
		}
		if(q==NULL)
			return;
	}
}
		
		


void sort_out(sort **h)
{//	printf("\n\nx:%d",x);
	x++;

	int count=1;
	if(h==NULL)		// No nodes
		return;
	sort *p=NULL,*q=NULL,*r=NULL,*temp=NULL;
	int i;
	
	
	p=*h;
	if(p->link==NULL)	//single node
	{

		return;
	}
	q=p->link;
	if(q->link==NULL)	//double node
	{	q->link=p;
		p->link=NULL;
		*h=q;
		return;
	}
	r=q->link;
//	printf("node:%d",node);
		count=1;
		while(1)
		{	
			if(count==1)
			{	if(p->num > q->num)
				{	
					p->link=q->link;
					q->link=p;
					//back p and q;
					temp=p;
					p=q;
					q=temp;
					//----------
					*h=p; // change head
				}
			}
			else
			{	if(q->num > r->num)
				{//	printf("test1\n");
					q->link = r->link;
					p->link = r;
					r->link = q;
			 	      //-------------
			     	  	temp=q;
					q=r;
					r=temp;	
				}
				if(r)
				{
					p=q;
					q=r;
					r=r->link;
				//	if(r->link==NULL);
					//	printf("NULL");
				}
			//	printf("not dumb\n");
				if(r->link==NULL)
				{	if(q->num > r->num)
					{//	printf("1\n");
						q->link=r->link;
					//	printf("2\n");
						r->link=q;
					//	printf("3\n");
						p->link=r;
					//	printf("4\n");
					}
					break;				
				}				
			}
			count++;

		
		}
		
	

}


void traversal(sort *h)
{	if(h==NULL)
	{
		printf("No nodes there!!\n");
		return;
	}
	while(h)
	{
		printf("  %d",h->num);
		h=h->link;
	}
}
	
sort* newnode()
{
	sort *new=NULL;
	new = (sort *)malloc(sizeof(sort));
	printf("\t\t");
	scanf("%d",&new->num);
	if(new->num<0)
	{
		free(new);
		return NULL;
	}
	node++;
	new->link=NULL;
	return new;
}

int main()
{
	int i;
	sort *head=NULL,*new=NULL,*last=NULL,*temp=NULL;
	printf("Enter numbers:\n");
	while(1)
	{
		new=newnode();
		if(new==NULL)
			break;
		if(head==NULL)
			head = new;
		else 
			last->link=new;
		last=new;		
	}
	printf("\nEntered numbers:\n");
	traversal(head);
	printf("\nsorted ASCENDING numberes:\n");
	for(i=0;i<node-1;i++)
		sort_out(&head);
	temp=head;
	traversal(head);
	
	remove_duplicate(head);
        printf("\nduplication Removed:\n");
	traversal(head);
//	printf("hhhhhh");
//	reverse(&head);
	printf("\nDECENDING Numbers\n");
//	if(temp==head)
//		printf("ok\n");
	reverse(&head);
//	printf("exit\n");
	traversal(head);
	printf("\n");

}

void reverse(sort **h)
{
//	printf("entter\n");
	sort *p,*q,*r;
	p=*h;
	if(p==NULL) //no node
		return;
	q=p->link;
//		printf("test0\n");
	if(q==NULL) //one node
		return;
	r=q->link; //double node
//		printf("test9\n");
	if(r==NULL)
	{	
//		printf("test1\n");
		q->link=p;
//		printf("test2\n");
		p->link=NULL;
	}
//	printf("half\n");
	while(q)
	{
		q->link=p;
		p=q;
		q=r;
		if(r)
			r=r->link;
	}
	(*h)->link=NULL;
	*h=p;
}




