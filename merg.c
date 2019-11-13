#include<stdio.h>
#include<stdlib.h>
void mergesort(int [],int,int,int);
void partition(int a[],int low,int high)
	{
	int mid;
	if(low<high)
		{	
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		mergesort(a,low,mid,high);
		}
	}
void mergesort(int a[],int low,int mid,int high)
	{
	int l,i,m,k,temp[10];
	l=low;
	i=low;
	m=mid+1;
	while(l<=m&&m<=high)
		{
		if(a[l]<=a[m])
			{
			temp[i]=a[l];
			l++;
			}
		else
			{
			temp[i]=a[m];
			m++;
			}
		i++;
		}
	if(l>mid)
		{
		for(k=m;k<=high;k++)
			{
			temp[i]=a[k];
			i++;
			}
		}
	else
		{
		for(k=l;k<=mid;k++)
			{		
			temp[i]=a[k];
			i++;
			}
		}
	for(k=low;k<=high;k++)
		{
		a[k]=temp[k];
		}
	}
void traversal(int a[],int n)
{
	int i;
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
};
void main()
	{
	int a[10],n,i,low,high;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter the data");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	high=n;
	low=0;
	partition(a,low,high);
	traversal(a,n);
	}
