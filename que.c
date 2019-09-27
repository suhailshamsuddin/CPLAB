#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,queue[10],size=10;
 
int enq(int data)
	{
	if(rear==size-1)
		{
			printf("overflow");
			return 0;
		}
	else
		{
			if(rear==-1)
				{
					front=0;
				}
			queue[++rear]=data;
		}
	}
int deq()
	{
	int d;
	if(front==-1)
		{
		printf("under flow");
		return 0;
		}
	else
		{
		d=queue[front];
		if(front==rear)
			{
			front=rear=-1;
			}
		else 
			{
			front++;
			}
		return d;
	}
	}
void display()
{
	int i;
    if(front>=0)
    {
        printf("\n The elements in queue\n");
        for(i=front; i<=rear; i++)
            printf("\n%d",queue[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The queu is empty");
    }
    
}

void main()
{	
int n,i,e;
	while(1)
	{
	
	printf("\nenter 1 to insert\n 2 to delete\n3 to display");
	printf("\nenter the choice");
	scanf("%d",&e);
	
	switch(e)
		{
			case 1:
				printf("enter ele");
				scanf("%d",&n);
				enq(n);
				break;
			case 2:
				i=deq();
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
