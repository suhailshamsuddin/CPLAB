#include<stdio.h>
void main()
{
int number,reminder=0,sum=0,a;

for(number=100;number<=500;number++)
	
	{
		a=number;
		sum=0;
		while(a>0){
				reminder=a%10;
				sum=sum+(reminder*reminder*reminder);
				a=a/10;
			}
		
		if(number==sum)
				{
					printf("%d\n",number);
				}
		}
	
		
	}



