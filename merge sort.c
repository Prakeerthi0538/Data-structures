//merge sort........

#include<stdio.h>
int * merge_sort(int *a,int n,int *b,int m)//'*' indicates integer address
/*when an array is used in a function and returns the same array in the main function,
  then the array is represented as local array with a warrning......
  so to avoid the warrning, static is used before int to declare the array as global array*/
{
    int i=0,j=0,k=0;
    static int res[100];
    while(i<n && j<m)
    {
		if(a[i]<b[j])
	    {
		   res[k++]=a[i++];	   
	    }
	    else
	    {
	    	res[k++]=b[j++];
		}
	}
	while(i<n)
	{
		res[k++]=a[i++];
	}
	while(j<m)
	{
		res[k++]=b[j++];
	}
	return res;
}
void main()
{
	int a[100],b[100],i,n,m,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
    res=merge_sort(a,n,b,m);
   	for(i=0;i<n+m;i++)
    {
   		printf("%d ",res[i]);
	}
}


/*
4
1 5 6 10
6
2 3 4 20 100 200

out put:
1 2 3 4 5 6 10 20 100 200
*/
