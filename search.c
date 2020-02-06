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
	return count ;
}

int main()
{
	int q,size,num,ele ;
	printf("enter the number of test cases") ;
	scanf("%d",&q) ;
	for(int i=0;i<q;i++)
	{
		printf("enter size of array") ;
		scanf("%d",&size) ;
		printf("enter number to be searched") ;
		scanf("%d",&num) ;
		int arr[size] ;
		for(int j=0;j<size;j++)
		{
			scanf("%d",&ele) ;
			arr[j]=ele ;
		}
		printf("%d",func( arr, num, size)) ;
	}
}
