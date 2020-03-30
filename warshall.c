#include<stdio.h>
#include<stdlib.h>
void warshall(int a[][20])
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
            {
                a[i][j]=a[i][j] || (a[i][k]&&a[k][j]);
            }		
		}
	}
}

int main()
{	
	printf("Enter the no. of vertices \n");
	scanf("%d",&n);
	int adj[n][n] ;
	printf("Enter the adjacency matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);	
		}
	}
	warshall(adj);
	printf("Transitive closure is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\n",adj[i][j]);	
		}
	}
	return 0;
}
