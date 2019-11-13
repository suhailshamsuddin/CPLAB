#include<stdio.h>
#include<stdlib.h>
void insertsort(int a[],int n)
	{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
	temp=a[i];
	j=i-1;
	while(temp<a[j]&&j>=0)
		{
		a[j+1]=a[j];
		j=j-1;
		}
	a[j+1]=temp;
	}
};
void traversal(int a[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
};
void main()
	{
	int a[10],n,i,d;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter the data");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	insertsort(a,n);
	traversal(a,n);
	}
