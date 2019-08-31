#include<stdio.h>
#include<stdlib.h>
struct term
{
int coef;
int expo;
struct term *addr;
};
struct term *createterm(int coef,int expo)
{
	struct term *p;
	p=(struct term*)malloc(sizeof(struct term));
	p->coef=coef;
	p->expo=expo;
	p->addr=NULL;
	return p;
}

struct term *createpoly(int n)
{
	int c,e,i;
	struct term *head=NULL,*nt,*last;
	for(i=0;i<n;i+=1)
		{
			printf("enter coeficient and exponent of %d term",i);
			scanf("%d",&c);
			scanf("%d",&e);
			nt=createterm(c,e);
			if(head==NULL)
				{
					head=last=nt;
				}
			else
				{
					last->addr=nt;
					last=nt;
				}
		}
		return head;
}

struct term *addpoly(struct term *h1,struct term *h2)
{
	struct term *rh=NULL,*p1,*p2,*n,*last;
	p1=h1;
	p2=h2;
	while(p1!=NULL&&p2!=NULL)
		{
			if(p1->expo>p2->expo)
				 {
					n=createterm(p1->coef,p1->expo);
					p1=p1->addr;
				}
					
			else if(p1->expo<p2->expo)
				{
					n=createterm(p2->coef,p2->expo);
					p2=p2->addr;
				}
			else 
				{
					n=createterm(p1->coef+p2->coef,p1->expo);
					p1=p1->addr;
					p2=p2->addr;
				}
		

			if(rh==NULL)
				{
				rh=last=n;
				}
			else
				{
				last->addr=n;
				last=n;
				}
	}		
	
	while(p1!=NULL)
		{
			n=createterm(p1->coef,p1->expo);
			p1=p1->addr;
			if(rh==NULL)
				{
					rh=last=n;
				}
			else 
				{
				last->addr=n;
				last=n;
				}
		}
	while(p2!=NULL)
		{
			n=createterm(p2->coef,p2->expo);
			p2=p2->addr;
			if(rh==NULL)
				{
					rh=last=n;
				}
			else 
				{
				last->addr=n;
				last=n;
				}
		}
return rh;
}



void travese(struct term *head)
{
struct term *p;
p=head;
while(p!=NULL)
	{
		printf("%dx%d+",p->coef,p->expo);
		p=p->addr;
	}
}


void main()
{	
	int s,w;
	struct term *a,*b,*c;
	printf("\nenter the no of terms");
	scanf("%d",&s);
	a=createpoly(s);
	printf("1st polynomial-");
	travese(a);
	printf("\nenter the no of terms");
	scanf("%d",&w);
	b=createpoly(w);
	printf("2nd polynomal-");
	travese(b);
	c=addpoly(a,b);
	printf("\nadd=");
	travese(c);
	
}
	
