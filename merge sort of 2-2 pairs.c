#include<stdio.h>
void merge(int *arr,int l,int m,int h)
{
	int i,j,n1,n2,a[100],b[100],k;
	n1=m-l+1;
	n2=h-m;
	k=l;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[k++];
	}
	k=m+1;
	for(i=0;i<n2;i++)
	{
		b[i]=arr[k++];
	}
	i=0,j=0;
	k=1;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k++]=a[i++];
		}
		else
		{
			arr[k++]=b[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=a[i++];
	}
	while(j<n2)
	{
		arr[k++]=b[j++];
	}
}
void merge_sort(int *arr,int n)
{
	int p,i,l,h,m;
	for(p=2;p<=n;p=p*2)//2 4 8 16.....
	{
		for(i=0;i<p;i=i+p)//i=0 2 4 6
		{
			l=i;
			h=l+p-1;
			m=(l+h)/2;
			if(h<=n)
			{
				merge(arr,l,m,h);
			}
		}
	}
}
void main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
8 1 7 2 6 3 5 4
0 1 2 3 4 5 6 7
*/
