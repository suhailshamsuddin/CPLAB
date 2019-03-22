#include<stdio.h>
float avg(int m1,int m2,int m3);
void main()
{
int m1,m2,m3;
float a,b;
printf("enter mark for subject 1:");
scanf("%d",&m1);
printf("enter mark for subject 2:");
scanf("%d",&m2);
printf("enter mark for subject 3:");
scanf("%d",&m3);
a=avg(m1,m2,m3);
}
float avg(int m1,int m2,int m3)
{
float average,percentage;
float sum;
sum=(m1+m2+m3);
average=sum/3;
printf("average is: %f\n",average);
percentage=sum/3;
printf("percentage is: %f%",percentage);

}
