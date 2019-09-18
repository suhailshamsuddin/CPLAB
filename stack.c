#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[10],size;


void push(int data)
	{
	if(top==size-1)
		{
		printf("overflow");
		return;
		}
	else 
		{
		top=top+1;
		stack[top]=data;
		}
	}
int pop()
	{
	if(top==-1)
		{
		printf("underflow");
		return 0;
		}
	else
		{
		return(stack[top--]);
		}
}

void main()
{	
int n,i,e;
	while(1)
	{
	
	printf("enter 1 to push\n 2 to pop");
	printf("\nenter the choice");
	scanf("%d",&e);
	
	switch(e)
		{
			case 1:
				printf("enter ele");
				scanf("%d",&n);
				push(n);
			case 2:
				i=pop();
				printf("%d",&i);
		}
	}
		
}
