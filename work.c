#include<stdio.h>
void main()
{
int time,worktime;
printf("enter work time:");
scanf("%d",&time);
if(2<=time&&time<=3)
	{
		printf("the worker is highly efficient");
	}
else if(3<time&&time<=4)
	{
		printf("the worker need to be improved");
}
else if(4<time&&time<=5)
	{
		printf("training is manditory for the worker");
	}
else if(time>5)
	{
		printf("worker is terminated");
	}
}

	
