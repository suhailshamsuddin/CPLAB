#include<stdio.h>
void main()
{
int number,reminder=0,sum=0,a;
printf("enter number");
scanf("%d",&number);
a=number;
while(number>0){
	reminder=number%10;
	
	sum=sum+(reminder*reminder*reminder);
	number=number/10;
}
if(a==sum)
{
	printf("%d is armstrong",a);
}
else
{
	printf("%d is not a armstong",a);
}

}
