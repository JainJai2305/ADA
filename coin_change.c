# include<stdio.h>
# include<stdlib.h>
int coin(int c,int fi[],int arr[],int t)
{
    if(fi[c]==1 ||fi[c]==-1)
    {
        return fi[c] ;
    }
    int flag=0 ;
    int m=c+1 ;
    int d=c-1 ;
    int u=1 ;
    for(int x=0;x<t;x++)
    {
        if(arr[x]>c)
        {
            continue ;
        }
        if(fi[arr[x]]==-1 || fi[c-arr[x]]==-1)
        {
            continue ;
        }
        if(fi[arr[x]]+fi[c-arr[x]]<m)
        {
            m= fi[arr[x]]+fi[c-arr[x]] ;
            flag++ ;
        }
    }
    if(flag==0)
    {
        m=-1 ;
    }
    return m ;

}
int main()
{
    int c ;
    printf("enter the number of coins available \n") ;
    scanf("%d",&c) ;
    int arr[c] ;
    printf("enter the values of the coins available in ascending order\n") ;
    for(int x=0;x<c;x++)
    {
        scanf("%d",&arr[x]) ;
    }
    printf("enter the value of which the change is needed \n") ;
    int value ;
    scanf("%d",&value ) ;
    int fi[value+1] ;
    int temp=0 ;
    fi[0]=0 ;
    for(int x=0;x<c;x++)
    {
        temp=arr[x] ;
        if(temp>value)
        {
            continue ;
        }
        fi[temp]=1 ;
        
    }
    for(int x=1;x<arr[0];x++)
    {
        fi[x]= -1 ;   
    }
    for(int x=1;x<value+1;x++)
    {
        fi[x]=coin(x,fi,arr,c) ;
    }
    
    if(fi[value]==-1)
    {
        printf("\nsorry the change cannot be made \n" ) ;
    }
    else
    {
        printf("\nthe minimum coins needed for make the change are %d \n",fi[14] ) ;
    }
    return 0 ;

}
