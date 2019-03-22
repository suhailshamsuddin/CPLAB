#include<stdio.h>
void main()
{
	int rem,bin=0,num,i=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num>0)
		{
		rem=num%2;
		bin=bin+rem*i;
		num=num/2;
		i=i*10;
		}
	
	printf("The bin equivalent is:%d",bin);
}
