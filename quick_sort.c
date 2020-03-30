# include<stdio.h>
#include<stdlib.h>
int part(int arr[],int l,int h)
{
    int i=l ;
    int j=h ;
    int temp ;
    int pivot=arr[l] ;
    while(i<j)
    {
        while(arr[i]<=pivot)
        {
            i++ ;
        }
        while(arr[j]>pivot)
        {
            j-- ;
        }
        if(i<j)
        {
            temp=arr[i] ;
            arr[i]=arr[j] ;
            arr[j]=temp ;
        }   
    }
    arr[l]=arr[j] ;
    arr[j]=pivot ;  
    return j ;
}
void quick(int l,int h,int arr[])
{
    if(l<h)
    {
        int j ;
        j=part(arr,l,h) ;
        if(l<j)
        {
            quick(l,j,arr) ;
        }
        
        if(j+1<h)
        {
            quick(j+1,h,arr) ;
        }        
        return ;
    }
    return ;
}
int main()
{
    int i ;
    printf("how many elements ? \n") ;
    scanf("%d",&i) ;
    int arr[i] ;
    printf("enter the elements \n") ;
    for(int x=0;x<i;x++)
    {
        scanf("%d",&arr[x]) ;
    }
    
    quick(0,i-1, arr) ;
    for(int x=0;x<i;x++)
    {
        printf("%d ",arr[x]) ;
    }
}
