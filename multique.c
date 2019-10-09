#include<stdio.h>
#include<stdlib.h>
int bound[5],i,size=10,queue[4],front[5],rear[5];

void enque(k,data)
{
if(bound[k+1]=rear[k])
	{
	printf("overflow\n");
	}
else
	{
	if(rear[k]==bound[k])
	{
	front[k]++;
	}
	queue[++rear[k]]=data;
	}
}

void deque(k)
{
int d;
	if(front[k]==bound[k])
	{
	printf("empty\n");
	}
	else
	{
	d=queue[front[k]];
	if(front[k]=rear[k])
	{
	front[k]=rear[i]=bound[k];
	}
	else
	{
	front[k]++;
	}
	}
}
void main()
{
int n,k,a,data;
printf("enter number of queue");
scanf("%d",&n);
bound[0]=front[0]=rear[0]=-1;
for(k=1;k<=n;k++)
	{
	bound[k]=front[k]=rear[k]=((size-1)/n)*k;
	}
while(1)
{
printf("enter 1:enque,2:deque\n");
printf("enter choice");
scanf("%d",&a);
switch(a)
	{	
	case 1:
		{
		printf("enter data");
		scanf("%d",&data);
		printf("enter queue");
		scanf("%d",&k);
		enque(data,k);
		break;
		}
	case 2:
		{
		printf("enter number of queue");
		scanf("%d",&k);
		deque(k);
		break;
		}
	}
}
}						
