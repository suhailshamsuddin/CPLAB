#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[10],size=10;


int push(int data)
	{
	if(top==size-1)
		{
		printf("overflow");
		return 0;
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
void display()
{
	int i;
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}

void main()
{	
int n,i,e;
	while(1)
	{
	
	printf("\nenter 1 to push\n 2 to pop\n3 to display");
	printf("\nenter the choice");
	scanf("%d",&e);
	
	switch(e)
		{
			case 1:
				printf("enter ele");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				i=pop();
				printf("%d",i);
				break;

			case 3:
				display();
				break;
			default :
				printf("enter the correct option");
		}
	}
		
}
