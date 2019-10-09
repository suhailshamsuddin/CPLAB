#include<stdio.h>
#include<stdlib.h>
int bound[5],i,size=10,stack[4],top[5];

void push(int data,int h)
{
if(top[h]==bound[h+1])
	{
	printf("overflow\n");
	}
else
	{
	stack[++top[h]]=data;
	}
}

int pop(j)
{
int d;
if(top[j]=bound[j])
	{
	printf("under flow\n");
	}
else
	{
	d=stack[top[j]];
	top[j]--;
	}
return d;
}

void main()
{
int n,k,a,data;
printf("enter number of stack");
scanf("%d",&n);
bound[0]=top[0]=-1;
for(k=1;k<=n;k++)
	{
	bound[k]=top[k]=((size-1)/n)*k;
	}
while(1)
{
printf("enter 1:push,2:pop,3:display");
printf("enter choice");
scanf("%d",&a);
switch(a)
	{	
	case 1:
		{
		printf("enter data and stack");
		scanf("%d",&data);
		printf("enter stack");
		scanf("%d",&k);
		push(data,k);
		break;
		}
	case 2:
		{
		printf("enter number of stack");
		scanf("%d",&k);
		pop(k);
		break;
		}
	}
}
}
