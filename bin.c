#include<stdio.h>
void main()
{
int rem,bin=0,num,i=1;
printf("enter the number");
scanf("%d",&num);
while(num>0)
	{
		rem=num%2;
		num=num/2;
		bin=bin+(rem*i);
		i=i*10;
		}
printf("binary equalent=%d",bin);
}
