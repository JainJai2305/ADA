#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr1[100000] ;
	char arr2[100000] ;
	printf("enter the string \n") ;
	fgets(arr1,100000 , stdin); 
	fgets(arr2,100000 , stdin); 
	int len1=strlen(arr1) ;
	int len2=strlen(arr2) ;
	int count=0 ;
	if(len1==len2)
	{
		for(int x=0;x<len1;x++)
		{
			if(arr1[x]!=arr2[x] )
			{
				count++ ;
				break ;
			}
		}
		if(count==0)
		{
			printf("the strings are equal \n") ;
		}
		else
		{
			printf("the strings are not equal \n") ;
		}
	}
	else
	{
		printf("the strings are not equal \n") ;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
