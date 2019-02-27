#include<stdio.h>
void main()
{
int i,j,row;
printf("enter number of star in first row:");
scanf("%d",&row);

for(i=1;i<=row;i++)
	{
		for(j=row;j>=i;j--)
			{
				printf("*");
			}
	printf("\n");
	}
	
}
