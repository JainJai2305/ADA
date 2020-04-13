import java.util.*; 
  
public class Kruskalz { 
    public static void main(String[] args) 
    { 
        Scanner sc=new Scanner(System.in) ;
        int v ;
        System.out.println("enter the number of vertices") ;
        v=sc.nextInt() ;
        ArrayList<Integer>v1=new ArrayList<>(v*v) ;
        ArrayList<Integer>v2=new ArrayList<>(v*v) ;
        ArrayList<Integer>l=new ArrayList<>(v*v) ;
        int[] l2=new int[v*v] ;
        System.out.println("enter the adjecency matrix") ;
        int a=0,z=0 ;
        for(int x=0;x<v;x++)
        {
            for(int y=0;y<v;y++)
            {
                a=sc.nextInt() ;
                v1.add(x) ;
                v2.add(y) ;
                l.add(a) ;
                l2[z++]=a ;
            }
        }
        Arrays.sort(l2) ;
        int len=0,index=0,ver1=0,ver2=0,tw=0 ;
        int[] vertex=new int[v] ;
        System.out.println() ;
        System.out.println("the mst is ") ;
        System.out.println("v1  to  v2    length :") ;
        
        for(int x=0;x<v-1;x++)
        {
            for(int y=0;y<v*v;y++)
            {
                len=l2[y] ;
                if(len==0 ||len==-1)
                {
                    continue ;
                }
                
                index=l.indexOf(len) ;
                if(index==-1)
                {
                    continue ;
                }
                
                ver1=v1.get(index) ;
                ver2=v2.get(index) ;
                
                if(vertex[ver1]==-1 && vertex[ver2]==-1)
                {
                    l.set(index,-1) ;
                }
                else
                {
                    break ;
                }
                
            }
            vertex[ver1]=-1 ;
            vertex[ver2]=-1 ;
            l.set(index,-1) ;
            System.out.println((ver1+1)+"   to  "+(ver2+1)+"      "+len) ;
            tw+=len ;
            
        }
        System.out.println("total weight is : "+tw) ;

  
    } 
    
}   
