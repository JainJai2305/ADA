#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp=0;
    printf("enter the number of elements \n") ;
	scanf("%d",&n) ;
	int a[n];
    printf("enter the elements in the array \n") ; 
	for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
		
	for(int i=0;i<n-1;i++)
	{
		int min=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
            {
                min=j;
            }
				
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("the sorted array is :\n")
	for(int i=0;i<n;i++)
	{
        printf(a[i]) ;
    }
	return 0;
}
