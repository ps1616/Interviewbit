public class Solution {
    public String reverseWords(String a) {

        String[] temp=a.split(" ");
        int l=temp.length;
        int i=1,j=l-2;
        String[] ans=temp[len-1];
        while(i<l)
        {
            ans[i]=temp[j];
            i++;
            j--;
        }
        i=0;
        String r="";
        while(i<l)
        {
            r=r.concat(ans[i]);
            i++;
        }
        return r;
    }
}
