#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,h ;
    printf("enter the number \n") ;
    scanf("%d",&n) ;
    int mob[n] ;
    int arr[n] ;
    for(int x=0;x<n;x++)
    {
        mob[x]=1 ;
    }
    for(int x=0;x<n;x++)
    {
        arr[x]=x ;
    }
    int flag ;
    int count=0 ;
    int temp=0 ;
    int max=0 ;

    while(1)
    {
        max=0 ;
        count++ ;
        flag=0 ;
        printf("%d - ",count) ;
        for(int x=0;x<n;x++)
        {
            printf("%d ",arr[x]+1) ;
        }

        printf("\n");
        for(int x=n-1;x>=0;x--)
        {
            if((mob[arr[x]]==1 && x-1>=0 && arr[x-1]<arr[x]) || (mob[arr[x]]==-1 && x+1<n && arr[x+1]<arr[x]))
            {
                flag++ ;
                if(arr[x]>=max)
                {
                    max=arr[x]  ;
                }
            }
        } 
        if(flag!=0)
        {
            h = max ;
            for(int y=h+1;y<n;y++)
            {
                mob[y]=-mob[y] ;
            }    
        }
        else
        {
            break ;
        }
        for(int x=0;x<n;x++)
        {
            if(arr[x]==h && mob[h]==1)
            {
                temp=arr[x] ;
                arr[x]=arr[x-1] ;
                arr[x-1]=temp ;
                break ;
            }
            if(arr[x]==h && mob[h]== -1)
            {
                temp=arr[x] ;
                arr[x]=arr[x+1] ;
                arr[x+1]=temp ;
                break ;
            }
            
        }

    }

}
