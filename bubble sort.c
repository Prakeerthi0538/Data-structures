/* Bubble Sort */

#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,x,swap_count;
	for(x=0;x<n;x++)
	{
		swap_count=0;
		for(i=0,j=i+1;i<n-x-1;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
				swap_count++;
			}
		}
		if(swap_count==0)
		{
			break;
		}
	/*	for(i=0;i<n;i++) --> to print all the iterations
		{
			printf("%d ",arr[i]);
		}
		printf("\n%d\n\n",swap_count);*/
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
7 -->no.of elements

67 34 54 21 76 55 44 -->array elements
i  j
				
i>j--> 67>34  if it is true swap two elements and i,j are incremented


34 67 54 21 76 55 44
	i  j
				
i>j--> 67>54  if it is true swap two elements and i,j are incremented 

34 54 67 21 76 55 44
	   i  j
				
i>j--> 67>21  if it is true swap two elements and i,j are incremented 

34 54 21 67 76 55 44
	      i  j
				
i>j--> 67>76  if it is true swap two elements and i,j are incremented 
               else only i,j are incremented
               
34 54 21 67 76 55 44
	         i  j
i>j--> 76>55  if it is true swap two elements and i,j are incremented 

34 54 21 67 55 76 44
	            i  j
i>j--> 76>44  if it is true swap two elements and i,j are incremented 

now it will start from begining i=0 and j=i+1

34 54 21 67 55 44 76   pass-1
The process will go untile n-1 times (n-->no.of elements)

*/
