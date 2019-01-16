public class Solution {
    boolean isSafe(ArrayList<String> A,int r,int c,boolean[][] visited)
    {
        return (r>=0&&r<A.size()&&c>=0&&c<A.get(r).length()&&A.get(r).charAt(c)=='X'
        &&!visited[r][c]);
    }
    public void dfs(ArrayList<String> A,int r,int c,boolean[][] visited)
    {
        int[] rn={1,-1,0,0};
        int[] cn={0,0,1,-1};
        visited[r][c]=true;
        for(int i=0;i<4;i++)
        {
            if(isSafe(A,r+rn[i],c+cn[i],visited))
                dfs(A,r+rn[i],c+cn[i],visited);
        }
    }
    public int black(ArrayList<String> A) {
        
        int count=0;
        boolean[][] visited=new boolean[A.size()][A.get(0).length()];
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A.get(i).length();j++)
            {
                if(A.get(i).charAt(j)=='X'&&!visited[i][j])
                {
                    dfs(A,i,j,visited);
                    ++count;
                }
            }
        }
        return count;
    }
}