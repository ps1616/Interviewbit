public class Solution {
    boolean isSafe(ArrayList<ArrayList<Character>> m,int r,int c,boolean[][] v)
     {
         return (r>=0 && r<m.size() && c>=0 && c<m.get(r).size() && (m.get(r).get(c)=='O'||m.get(r).get(c)=='1') && !v[r][c]);
     }
     void dfs1(ArrayList<ArrayList<Character>> m,int r,int c,boolean[][] v)
     {
         v[r][c]=true;
         int[] rn={1,-1,0,0};
         int[] cn={0,0,1,-1};
        m.get(r).set(c,'O');
        for(int i=0;i<4;i++)
            if(isSafe(m,r+rn[i],c+cn[i],v))
            {
               // m.get(r+rn[i]).set(c+cn[i],'X');
                dfs1(m,r+rn[i],c+cn[i],v);
                
            }
 
     }
     void islands(ArrayList<ArrayList<Character>> m)
     {
         boolean[][] v=new boolean[m.size()][m.get(0).size()];
         int count=0;
         for(int i=0;i<m.size();i++)
         {
             for(int j=0;j<m.get(i).size();j++)
             {
                 if(m.get(i).get(j)=='O' && !v[i][j] && (i==0||i==m.size()-1||j==0||j==m.get(i).size()-1))
                 {
                     dfs1(m,i,j,v);
                    // m.get(i).set(j,'X');
                 }
                 else if(m.get(i).get(j)=='O'&&!v[i][j])
                 {
                     m.get(i).set(j,'1');
                 }
             }
         }
         for(int i=0;i<m.size();i++)
         {
             for(int j=0;j<m.get(i).size();j++)
             {
                 if(m.get(i).get(j)=='1')
                 m.get(i).set(j,'X');
             }
         }
         
     }
    public void solve(ArrayList<ArrayList<Character>> a) {
        
        islands(a);
    }
}