public class Solution {
    public int isPalindrome(String A) {


        A=A.toLowerCase();
        char[] t=A.toCharArray();
        //int length=A.length();
        int len = t.length;
        //System.out.println(length)
        int i=0;
        int j=len-1;
        while(i<j)
        {

           if(!((t[i]>=97&&t[i]<=122)||(t[i]>='0'&&t[i]<='9')))
            {
                ++i;
                continue;
            }
            if(!((t[j]>=97&&t[j]<=122)||(t[j]>='0'&&t[j]<='9')))
            {
                --j;
                continue;
            }
            if(t[i]!=t[j])
            return 0;
            ++i;
            --j;
        }
        return 1;
    }
}
