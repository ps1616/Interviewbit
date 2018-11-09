public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int lengthOfLastWord(final String A) {

        String[] temp=A.split(" ");
        if(temp.length==0)
        return 0;
        String ans=temp[temp.length-1];
        return ans.length();
    }
}
