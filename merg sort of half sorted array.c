#include<stdio.h>
void merge_sort(int *arr,int n)
{
	int i,j,l,m,h,a[100],b[100],k;
	l=0;
	h=n-1;
	m=(l+h)/2;
	for(i=0;i<=m;i++)
	{
		a[k++]=arr[i];
	}
	k=0;
	for(i=m+1;i<=h;i++)
	{
		b[k++]=arr[i];
	}
	 i=0,j=0,k=0;
    while(i<n/2 && j<n/2)
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
	while(i<n/2)
	{
		arr[k++]=a[i++];
	}
	while(j<n/2)
	{
		arr[k++]=b[j++];
	}
	return arr;
}
void main()
{
	int i,arr[100],n;
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
8
1 4 6 8 2 3 5 10
*/
