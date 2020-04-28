#include<stdio.h>
int d;
int sum(int arr[], int l)
{
    int sum = 0, i;
    for(i = 0; i <= l; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void func(int arr[], int l, int n)
{
    
    int i, j = 0;
    int temp[n - 1];
    if(l>=n)
    {
        return;
    }
    if(sum(arr, l) == d)
    {
        printf("{");
        for(int i = 0; i < l; i++)
        {
            printf("%d , ",arr[i]);
        }
        printf("%d  } \n",arr[l]);
    }
    else{
        for(i = 0; i < n; i++)
        {
            if(i != l)
                temp[j++] = arr[i];
        }
        func(arr, l + 1, n);
        func(temp, l, n - 1);

    }

}
int main(){
    int n, i;
    printf("Enter the size of the set\n") ;
    scanf("%d",&n) ;
    int arr[n];
    printf("Enter the elements in set\n") ;
    for(i = 0;i < n; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    printf("Enter required sum\n");
    scanf("%d",&d) ;
    printf("The required sum can be obtained from the following subsets\n") ;
    func(arr, 0, n);
}
