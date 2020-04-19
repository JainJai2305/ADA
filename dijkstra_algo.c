// this program shows the working of dijkstra's algorithm on directed graph 
# include<stdio.h>
# include<stdlib.h>
int minf(int arr[],int v)
{
    int min=999999 ;
    int ind=0 ;
    for(int x=0;x<v;x++)
    {
        if(arr[x]==-1 || arr[x]==0)
        {
            continue ;
        }
        if(arr[x]<min)
        {
            min=arr[x] ;
            ind=x ;
        }
    }
    if(ind==0)
    {
        return -1 ;
    }
    return ind ;
}
int main()
{
    printf("enter the number of vertices in the directed graph enter -1 for infinity\n") ;
    int m ;
    scanf("%d",&m) ;
    printf("enter the adjacency matrix \n") ;
    int adj[m][m] ;
    for(int x=0;x<m;x++)
    {
        for(int y=0;y<m;y++)
        {
            scanf("%d",&adj[x][y]) ;
        }
    }
    printf("\n") ;
    int shortest[m]  ;
    int ss[m]  ;
    for(int x=0;x<m;x++)
    {
        shortest[x]=adj[0][x] ;
        ss[x]=adj[0][x] ;
    }
    int dist=0 ;
    int f ;
    for(int x=1;x<m;x++)
    {
        f=minf(ss,m) ;
        if(f==-1)
        {
            break ;
        }
        for(int y=0;y<m;y++)
        {
            if(adj[f][y]==-1)
            {
                continue ;
            }
            dist=shortest[f]+adj[f][y] ;
            if(dist<shortest[y] || shortest[y]==-1)
            {
                shortest[y]=dist ;
            }
        }
        ss[f]=-1 ;
    }
    printf("the shortest path from veretex 1 : \n") ;
    for(int x=0;x<m;x++)
    {
        printf("to vertex %d is %d \n",x+1,shortest[x]) ;
    }

}
