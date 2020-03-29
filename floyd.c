#include<stdio.h>
void floyd(int a[][20]);
int min(int n1, int n2) ;
int n;
int a[20][20];
void floyd(int a[][20])
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
            {
                a[i][j]=min(a[i][j],(a[i][k]+a[k][j]));
            }
				
		}
	}
}
int min(int n1, int n2)
{
    if (n1 >= n2 ) 
    {
        return n2 ;
    }
    else 
    {
        return n1 ;
    }
}
int main()
{

	printf("Enter the no. of vertices=");
	scanf("%d",&n);
	int arr[n][n] ;
	printf("Enter the weighted matrix ( enter 99999 for infinity)");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);

		}
	}
	floyd(arr);
	printf("All Pair Shortest paths :");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\n",arr[i][j]);

		}

	}
	return 0;
}
