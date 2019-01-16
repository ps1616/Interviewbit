public class Solution {
    
    LinkedList<Integer> a[];
    int v;
    boolean[] visited;
    public Solution(){}
    public Solution(int v)
    {
        this.v=v;
        a=new LinkedList[v];
        visited=new boolean[v];
        for(int i=0;i<v;i++)
        {
            a[i]=new LinkedList<>();
            visited[i]=false;
        }
    }
    void insert(int s,int d)
    {
        a[s].add(d);
    }
    void path(int u)
    {
        visited[u]=true;
        for(int i=0;i<a[u].size();i++)
        {
            int v=a[u].get(i);
            if(visited[v])
            continue;
            path(v);
        }
    }
    boolean dircycle(int u,boolean[] rec)
     {
         if(rec[u])
         return true;

         if(visited[u])
         return false;

         rec[u]=visited[u]=true;

         for(int i=0;i<a[u].size();i++)
         {
             int v=a[u].get(i);
             if(dircycle(v,rec))
                return true;
         }
         rec[u]=false;
         return false;
     }
     boolean dircycle()
     {
         boolean[] rec=new boolean[v];
         for(int i=1;i<v;i++)
            if(dircycle(i,rec))
                return true;
        return false;
     }
    public int solve(int A, ArrayList<Integer> B, ArrayList<Integer> C) {
        
        Solution s=new Solution(A);
        for(int i=0;i<B.size();i++)
        {
            int n1=B.get(i);
            int n2=C.get(i);
            n1=n1-1;
            n2=n2-1;
            B.set(i,n1);
            C.set(i,n2);
        }
        for(int i=0;i<B.size();i++)
        {
            s.insert(B.get(i),C.get(i));
        }
       
        if(s.dircycle())
            return 0;
        return 1;
    }
}
