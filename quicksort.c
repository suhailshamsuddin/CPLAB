#include<stdio.h>
#include<stdlib.h>



void quicksort(int a[],int first,int last)
{
	int i,j,pivot,t;
	if(first<last)
	{
		pivot=a[first];
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=pivot&&i<last)
				i++;
			while(a[j]>=pivot&&j>first)
				j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[first];
		a[first]=t;
		quicksort(a,0,j-1);
		quicksort(a,j+1,last);
	}
}
void traversal(int a[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}

void main()
{
int i,a[20],n,first,last;
printf("enter no of variables:");
scanf("%d",&n);
printf("enter data");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("completed");
first=0;
last=n-1;
quicksort(a,first,last);
traversal(a,n);
}
