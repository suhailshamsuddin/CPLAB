#include<stdio.h>
float mult(float a,int b);
void main()
{
int a;
float b,c;
printf("enter int number:" );
scanf("%d",&a);
printf("enter float number:" );
scanf("%f",&b);
c=mult(b,a);
printf("product is %f",c);
}
float mult(float a,int b)
{
float z;
z=a*b;
return z;
}

