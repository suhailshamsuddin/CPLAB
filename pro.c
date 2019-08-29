#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	 struct node *addr;
}; 
struct node *createnode(int item)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->addr=NULL;
	return p;
}
struct node *insertbeg(struct node *n,struct node *head)
{
	if(head==NULL)
	{
		head=n;
	}
	else
	{
		n->addr=head;
		head=n;
	}
return head;
}
struct node *insertmid(struct node *n,struct node *head,int pos)
	{
	int i;
	struct node *p;
	i=1;
	p=head;
	while(p->addr!=NULL&&i<pos-1)
		{
		p=p->addr;
		i++;
		}
	n->addr=p->addr;
	p->addr=n;
	}
struct node *insertend(struct node *n,struct node *head)
{
struct node *p;
if(head==NULL)
	{
		head=n;
	}
else
	{
	p=head;
	while(p->addr!=NULL)
		{
		p=p->addr;
		
		}
	p->addr=n;
	}
}
struct node *delbeg(struct node *head)
	{
	if(head==NULL)
		{
		printf("empty");
		}
	else
		{
		head=head->addr;
		}
	return head;
	}
struct node *delend(struct node *head)
	{
	struct node *p,*c;
	if(head==NULL)
		{
		printf("empty");
		}
	else
		{
		c=p=head;
		while(p->addr!=NULL)
			{
			c=p;
			p=p->addr;
			}
		c->addr=NULL;
		}
	return head;
	}
struct node *delmid(struct node *head,int data)
	{
	if(head==NULL)
		{
		printf("empty");
		}
	else 
	{
	struct node *c,*p;
	c=p=head;
	while(p->data!=data&&p!=NULL)
		{
		c=p;
		p=p->addr;
		}
	if(p!=NULL)
		{
		c->addr=p->addr;
		}
	else
		{
		printf("no data found");
		}
	}
	}

void traversal(struct node *head)
{
struct node *p;
if(head==NULL)
	{
		printf("empty ");
	}
else
	{	
		p=head;
		while(p!=NULL)
		{
			printf("%d  ",p->data);
			p=p->addr;
		}
	}
}

void main()
{
int n,a,po;
struct node *s;
struct node *head=NULL;
	
while (1)
{
printf("\npress 1-insertion at begning\n 2-insertion at end\n 3-insertion at midile\n 4-tranverse\n 5-deletion at end\n 6-deletion at beg\n 7-deletion at mid\n");
printf("press-");
scanf("%d",&n);
switch(n)
{
case 1:
	printf("selected insertion at begning");
	printf("\nenter ur data");
	scanf("%d",&a);
	s=createnode(a);
	head=insertbeg(s,head);
	break;
case 2:
	printf("selected insertion at end");
	printf("\nenter ur data");
	scanf("%d",&a);
	s=createnode(a);
	head=insertend(s,head);
	break;
case 3:
	printf("selected insertion at mid");
	printf("enter the data\n");
	scanf("%d",&a);
	printf("enter the position to be inserted");
	scanf("%d",&po);
	s=createnode(a);
	head=insertmid(s,head,po);
	break;
case 4:
	printf("selected transverse\n");
	traversal(head);
	break;
case 5:
	printf("selected del at end");
	head=delend(head);
	break;
		
case 6:
	printf("selected del at beg");
	head=delbeg(head);	
	break;
case 7:
	printf("selected del at mid");
	printf("enter the data");	
		scanf("%d",&a);
		head=delmid(head,a);
	break;
default:
		{
		printf("you have entered the wrong option ");
		break;
		}

	
}}
}				
