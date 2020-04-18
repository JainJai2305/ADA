#include<stdio.h>
#include<stdlib.h>

void Grid(int n)
{
    int arr[n][n];
    int x = 0;


    for (int i = 0; i < n / 4; i++) 
    {
        for (int j = 0; j < n / 4; j++) 
        {
            for (int k = 0; k < 4; k++) 
            {
                for (int l = 0; l < 4; l++) 
                {
                    arr[i * 4 + k][j * 4 + l] = x;
                    x++;
                }
            }
        }
    }


    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter a positive integer which is multiple of 4:");
    scanf("%d",&n);
    Grid(n);
    return 0;
}