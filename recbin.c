#include<stdio.h>
int func(int n,int arr[],int b,int ele)
{
	int num=ele ;
	int size=n ;
	int mid=b+size/2,mide=arr[mid] ;
	if(size<0)
	{
		return -1 ;
	}
	if(mide==ele)
	{
		return 1 ;#include<stdio.h>
int func(int n,int arr[],int b,int ele)
{
	int num=ele ;
	int size=n ;
	int mid=b+size/2,mide=arr[mid] ;
	if(size<0)
	{
		return -1 ;
	}
	if(mide==ele)
	{
		return 1 ;
	}
	if(mide<ele)
	{
		func( mid, arr,0, num)
	}
	if(mide>ele)
	{
		func( size-mid, arr,mid, num)
	}
}

int main()
{
	int size,item ;
	printf("enter the size \n") ;
	scanf("%d",&size) ;
	int arr[size] ;
	printf("enter the elements \n") ;
	for(int x=0;x<size;x++)
	{
		scanf("%d",arr[x]) ;
	}
	printf("enter the element\n") ;
	scanf("%d",&item) ;
	if(func(size,arr,0,item)==-1)
	{
		printf("element is not present") ;
	}
	else
	{
		printf("element is present") ;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	if(mide<ele)
	{
		func( mid, arr,0, num)
	}
	if(mide>ele)
	{
		func( size-mid, arr,mid, num)
	}
}

int main()
{
	int size,item ;
	printf("enter the size \n") ;
	scanf("%d",&size) ;
	int arr[size] ;
	printf("enter the elements \n") ;
	for(int x=0;x<size;x++)
	{
		scanf("%d",arr[x]) ;
	}
	printf("enter the element\n") ;
	scanf("%d",&item) ;
	if(func(size,arr,0,item)==-1)
	{
		printf("element is not present") ;
	}
	else
	{
		printf("element is present") ;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
