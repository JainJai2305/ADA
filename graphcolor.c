#include<stdio.h> 
#include<stdbool.h> 
int V ;
void printSolution(int color[]); 
bool isSafe (bool graph[V][V], int color[]) 
{    
    for (int i = 0; i < V; i++) 
        for (int j = i + 1; j < V; j++) 
        if (graph[i][j] && color[j] == color[i]) 
            return false; 
    return true; 
} 
bool graphColoring(bool graph[V][V], int m, int i, int color[V]) 
{ 
     
    if(i==V) 
    {   
        if(isSafe(graph,color)) 
        { 
        
            printSolution(color); 
            return true; 
        } 
        return false; 
    }     
    for(int j=1; j<=m; j++) 
    { 
        color[i]=j;      
        if(graphColoring(graph,m,i+1,color)) 
            return true; 
          
        color[i]=0; 
    } 
   
    return false; 
} 
   

void printSolution(int color[]) 
{ 
    printf("Solution Exists:"
            " Following are the assigned colors \n"); 
    for (int i = 0; i < V; i++) 
      printf(" %d ", color[i]); 
    printf("\n"); 
} 
   
 
int main() 
{ 
    printf("enter the vertices \n") ;
    scanf("%d",&V) ;
    bool graph[V][V] ;
    printf("enter the adjacency matrix with either 1 or 0 \n") ;
    for(int x=0;x<V;x++)
    {
        for(int y=0;y<V;y++)
        {
            scanf("%d",graph[x][y]) ;
        }
    }
    int m = V-1; 
    int color[V]; 
    for (int i = 0; i < V; i++) 
       color[i] = 0; 
         
    if(!graphColoring (graph, m, 0, color)) 
        printf("Solution does not exist"); 
          
    return 0; 
} 
