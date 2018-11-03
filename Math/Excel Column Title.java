public class Solution {
    public String convertToTitle(int A) {

        StringBuilder str=new StringBuilder();
        while(A>0)
        {
            str.insert(0,(char)((A-1)%26+'A'));
            A=(A-1)/26;
        }
        String s=str.toString();
        return s;
    }
}
