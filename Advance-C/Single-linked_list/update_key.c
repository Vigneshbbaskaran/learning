#include<stdio.h>
#include<stdlib.h>
int node;
typedef struct student
 {
	 	 int ID;
		 char name[10];
	 	 struct student *link;
 }student;

void delete(student **h,int p);
void traversal(student *h);
void insert(student **h,int p);
void reverse(student **h);
void key(student **h,int id);
void after_key(student **h,int id);
void clone(student **h,int p);

student* createnode1()
{	
	student *n=(student *)malloc(sizeof(student));
	printf("Total Available Nodes :%d\n",node);
	printf("\tenter Id:");
	scanf("%d",&n->ID);
	printf("\tEnter Name:");
	scanf("%s",n->name);
	n->link=NULL;
	node++;
	return n;
}

int main()
{
	int p,x,i;
	char c = 'Y';
	student *head=NULL,*new =NULL,*last=NULL;
	while(c == 'y' || c== 'Y')
	{
		new = createnode1();
		if(head==NULL)
			head=new;
		else 
			last->link=new;
		last=new;
		printf("New node? Y?N:\t");
		scanf(" %c",&c);
		printf("\n");
	}
	traversal(head);
	while(1)
		{for(i=0;i<80;i++)
		printf(".*");
		printf("\n");
		printf("Select any one:\n\t1.INSERT\n\t2.DELETE\n\t3.REVERSE\n\t4.INSERT AFTER THE KEY\n\t5.INSERT BEFORE THE KEY\n\t6.TRAVERSAL\n\t7.EXIT\n--------> ");
		scanf("%d",&x);
		printf("\nU entered :%d\n",x);
		
		
		if(x == 1)
		{
			while(1)
			{
				printf("want to insert new node? Y/N :");
				scanf(" %c",&c);
				if(c== 'Y' ||c=='y')
				{
			//		printf("Total Nodes:%d\n",node);
					printf("New node position :");
					scanf("%d",&p);
					if(p>(node+1))
						printf("Please enter valid node\n");
					else
						insert(&head,p);
				}
				else 
					break;
			}
		}
			
		
		if(x == 2)
		{	while(1)
			{	if(node==0)
				{
					printf("\tNo Node left to delete\n");
					break;
				}
				printf("want to delete node? Y/N :");
				scanf(" %c",&c);
				if(c== 'Y' ||c=='y')
				{
					printf("Total Nodes:%d\n",node);
					printf("delete node no :");
					scanf("%d",&p);
					if(p>node)
						printf("Please enter Valid Node\n");
					else
						delete(&head,p);
				}
		
				else 
					break;
			}
		}
				
		if(x == 4)
		{	while(1)
			{
				if(node==0)
				{
					printf("\tNo node left to search\n");
					break;
				}
				printf("Want to insert after the Key ID? Y/N :");
				scanf(" %c",&c);
				if(c== 'Y' ||c=='y')
				{
					printf("Before Key ID :");
					scanf("%d",&p);
					if(p>node)
						printf("Please enter Valid Node\n");
					else
						key(&head,p);
				}
				else 
					break;
			}
		}
		if(x == 5)
		{	
			while(1)
			{
				if(node==0)
				{
					printf("\tNo node left to search\n");
					break;
				}
				printf("Want to insert Before the Key ID? Y/N :");
				scanf(" %c",&c);
				if(c== 'Y' ||c=='y')
				{
					printf("Key ID :");
					scanf("%d",&p);
					if(p>node)
						printf("Please enter Valid Node\n");
					else
						after_key(&head,p);
					
				}
				else 
					break;
			}
		}
		if(x==7)
			break;
		if(x==6)
			traversal(head);
		if(x==3)
			reverse(&head);
		if(x<1 || x>7)
			printf("enter valid number..!!!\n");
		}
}
void reverse(student **h)
{		
		student *p,*q,*r;
		p=*h;
		if(p==NULL)	//No nodes			
			return;
		q=p->link;
		if(q==NULL)	//Single Node
			return;
		r=q->link;
		if(r==NULL)	//Double node
		{
			q->link=p;
			p->link=NULL;
		}

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

void traversal(student *h)
{		
		if(node==0)
		{
			printf("No node left\n");
			return;
		}
		int i=1;
		while(h)
		{	
			printf("\n\nNode %d\n",i);
			printf("Id:%d\n",h->ID);
			printf("Name:%s\n",h->name);
			h=h->link;
			i++;
		}
		if(i==0)
			printf("\n\nNode NULL\n");
}

void insert(student **h,int p)
{
		int i;
		student *new=NULL,*last=*h;
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
	
void key(student **h,int id)
{

		int i=node;
		student *new=NULL,*last=*h;
		new = createnode1();
		{
			while(last->ID != id)
			{	
				last=last->link;
				i--;
				if(i==0)
				{	printf("\nEntered key NOT valid!!\n");
					return;
				}
			}
			new->link=last->link;// link next to new node copied to new  node
			last->link=new;// cut  the  link
		}
										
}
void delete(student **h,int p)
{	
		if(node==0)
		{
			printf("No node left to delete\n");
			return;
		}
		student *delete=NULL,*temp=*h;
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
	
void after_key(student **h,int id)
{
		if(node==0)
		{
			printf("No node left to search\n");
			return;
		}
		int i=node;
		student *new=NULL,*p=*h,*q=NULL;
		new = createnode1();
		if(p->ID==id)
		{
			new->link=*h;
			*h=new;
		}
		else
		{
			q=p->link;
			while(q->ID!=id)
			{
				p=q;
				if(q)
					q=q->link;
				else
				{
					printf("Invalid Key!!\n");
					return;
				}
			}
			new->link=q;
			p->link=new;
		}
}

