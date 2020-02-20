#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n ;
	printf("enter the number of elements \n") ;
	scanf("%d",&n) ;
	int arr[n] ;
	
	for(int x=0;x<n;x++)
	{
		arr[x] = rand() ;
	}
	printf(" the elements are \n") ;
	for(int x=0;x<n;x++)
	{
		printf("%d \n",arr[x]) ;
	}
	printf("\n\n") ;
	// algorithm for selection sort
	int max=-9999,count=0,temp=0 ;
	for(int y=0;y<n;y++)
	{
		max=-9999 ;
		for(int x=0;x<n-y;x++)
		{
			if(arr[x]>max)
			{
				max=arr[x] ;
				count=x ;
			}
		}
	
		temp=arr[n-1-y] ;
		arr[n-1-y]=max ;
		arr[count]=temp ;
	}
	printf("the sorted array is: \n") ;
	for(int x=0;x<n;x++)
	{
		printf("%d \n",arr[x]) ;
	}
	
	return 0 ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
