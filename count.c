#include<stdio.h>
int func(int arr[],int n,int size)
{
	int mid=0,ini=0,fi=size-1,mide=0,count=-1,snc=size ;
	while(size>0)
	{
		size= fi-ini+1 ;
		mid= mid+size/2 ;
		mide= arr[mid] ;
		
		if(n==mide)
		{
			count=1 ;
			break ;
		}
		if(n<mide)
		{
			ini=0 ;
			fi=mid ;
		}
		if(n>mide)
		{
			ini=mid ;
			fi=snc-1 ;
		}
		size= fi-ini+1 ;
	}
	if(count==1)
	{
		return mid ;
	}
	else
	{
		return -1 ;
	}
}
int main()
{
	int size,ele,count=0,index ;
	printf("enter the size \n") ;
	scanf("%d",&size) ;
	int arr[size] ;
	
	printf("enter the elements in ascending order \n") ;
	for(int x=0;x<n;x++)
	{
		scanf("%d",&arr[x]) ;
	}
	
	printf("enter the element \n") ;
	scanf("%d",&ele) ;
	
	if(func(arr,ele,size)==-1)
	{
		printf("the element is no present") ;
	}
	else
	{
		index=func( arr,ele,size) ;
		while(index==-1) 
		{
			index=func( arr,ele,size) ;
			count++ ;
			for(int x=index+1;x<size;x++)
			{
				arr[x-1]=arr[x] ;
			}
			size-- ;
			index=func( arr,ele,size) ;
		}
		
	}
}




























