#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
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

void main()
    {
	int x,y,res;
        char data[20];
        printf("Enter data: ");
        scanf("%s",&data);
	printf("%s", data);
	int i=0;
	while(data[i]!='\0')
		{
		if(isdigit(data[i]))
			{
			push(data[i]-'0');
			}
		else
			{
			y=pop();
			x=pop();
			if(data[i]=='+')
				{
				res=x+y;
				}
			else if(data[i]=='-')
				{
				res=x-y;
				}
			else if(data[i]=='*')
				{
				res=x*y;
				}
			else if(data[i]=='/')
				{
				res=x/y;
				}
			else if(data[i]=='^')
				{
				res=pow(x,y);
				}
			else
				{
				printf("invalid");
				}
			push(res);
			}
		i++;
		}
	
printf("\nresult=%d",res);

    }
