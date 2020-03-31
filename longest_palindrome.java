import java.util.* ;
import java.util.Arrays; 
import java.util.Collections; 
class longpalin
{public static void main(String args[])
{
    Scanner sc=new Scanner(System.in) ;
    System.out.println("enter the sequence of characters") ;
    String str=sc.nextLine() ;
    int n=str.length() ;
    int []arr=new int[n] ;
    int z=0,y=0,t=0,w=0,count=0 ;
    char p1,p2,p3 ;
    for(int x=0;x<n;x++)
    {
        z=0; y=0 ; w=x ;
        p1='-' ;
        p3='-' ;
        p2=str.charAt(w);
        if(x<n-1)
        {
            z=x+1 ;
            p3=str.charAt(z) ;
        }
        if(x>0)
        {
            y=x-1 ;
            p1=str.charAt(y) ;
        }
        count=0 ;
        while(p2==p3)
        {
            count+=2;
           
            if(w-1<0 || z+1>=n)
            {
                break ;
            }
            
            w-- ;z++ ;
            p2=str.charAt(w) ;
            p3=str.charAt(z) ;
        }
        if(count>0)
        {
            arr[t++]=count ;
        }
        count=0 ;
        while(p1==p3)
        {
            count+=3 ;
            if(y-1<0 || z+1>=n)
            {
                break ;
            }
            y-- ;z++ ;
            p1=str.charAt(y) ;
            p3=str.charAt(z) ;
        }
        if(count>0)
        {
            arr[t++]=count ;
        }
    }
    Arrays.sort(arr) ;
    System.out.println(arr[n-1]) ;


}

}
