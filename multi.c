#include<stdio.h>
void main()
{
int i,number,product;
printf("enter number:");
scanf("%d",&number);
for(i=1;i<11;i++)
	{
		product=i*number;
		printf("%d*%d=%d\n",number,i,product);
	}
}
