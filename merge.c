#include<stdio.h>
#include<stdlib.h>
void merge(int l,int m,int h,int arr[])
{
    int arr1[m-l+1] ;
    int size1=m-l+1 ;
    int arr2[h-m] ;
    int size2=h-m ;
    int y=0 ;
    int x=0 ;
    int d=0 ;
    for(int x=0;x<size1;x++)
    {
        arr1[y++]=arr[l+x] ;
    }
    y=0 ;
    for(int x=0;x<size2;x++)
    {
        arr2[y++]=arr[m+1+x] ;
    }
    y=0 ;
    x=0 ;
    while(y<size2 && x<size1)
    {
        if(arr1[x]<=arr2[y])
        {
            arr[d++]= arr1[x++] ;
        }
        else
        {
            arr[d++]= arr2[y++] ;
        }
    }
    if(x<size1)
    {
        while(x<size1)
        {
            arr[d++]=arr1[x++] ;
        }
    }
    if(y<size2)
    {
        while(y<size2)
        {
            arr[d++]=arr2[y++] ;
        }
    }
    return ;

}

void merges(int arr[],int l,int h,int size)
{
    if(l<h)
    {
        int m=(l+h)/2 ;
        merges(arr, l,m,m-l+1) ;
        merges(arr, m+1,size-1,m-l+1) ; 
        merge(l, m, h, arr)  ;
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
    
    merges( arr,0,i-1,i) ;
    for(int x=0;x<i;x++)
    {
        printf("%d ",arr[x]) ;
    }
}
