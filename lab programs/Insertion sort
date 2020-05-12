# include<stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	int n,key ;
	printf("enter the number of elements \n") ;
	scanf("%d",&n) ;
	int arr[n] ;
	printf("enter the elements \n") ;
	
	for(int x=0;x<n;x++)
	{
		scanf("%d",&arr[x]) ;
	}
	int j ;
	for(int i=1;i<n;i++)
	{
		j=i-1 ;
		key=arr[i] ;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j] ;
			j=j-1 ;
		}
		arr[j+1]=key ;
	}
	
	printf("the sorted array is: \n") ;
	for(int x=0;x<n;x++)
	{
		printf("%d ",arr[x]) ;
	}
	
}
