public class Solution {
    public String addBinary(String A, String B) {

         StringBuilder s3=new StringBuilder(A);
                 StringBuilder s4=new StringBuilder(B);
                s3.reverse();
                s4.reverse();
                String s1=s3.toString();
                String s2=s4.toString();
                char[] t1=s1.toCharArray();
                char[] t2=s2.toCharArray();
                String r="";
                int i=0,j=0,l1=s1.length(),l2=s2.length();
                int sum=0,carry=0;
                while(i<l1&&j<l2)
                {
                        int a=Character.getNumericValue(t1[i]);
                        int b=Character.getNumericValue(t2[j]);
                        sum=a+b+carry;
                        if(sum==1)
                        {
                                r=r+"1";
                                carry=0;
                        }
                        else if(sum==2)
                        {
                                r=r+"0";
                                carry=1;
                        }
                        else if(sum==3)
                        {
                                r=r+"1";
                                carry=1;
                        }
                        else
                        {
                                r=r+"0";
                                carry=0;
                        }
                        ++i;
                        ++j;
                }
                if(i==l1&&j!=l2)

                 {
                        while(j<l2)
                        {
                                int b=Character.getNumericValue(t2[j]);
                                sum=b+carry;
                                   if(sum==1)
                        {
                                r=r+"1";
                                carry=0;
                        }
                        else if(sum==2)
                        {
                                r=r+"0";
                                carry=1;
                        }
                        else if(sum==3)
                        {
                                r=r+"1";
                                carry=1;
                        }
                        else
                        {
                                r=r+"0";
                                carry=0;
                        }

                                ++j;
                        }
                }
                 if(i!=l1&&j==l2)
                {
                        while(i<l1)
                        {
                                int b=Character.getNumericValue(t1[i]);
                                sum=b+carry;
                                   if(sum==1)
                        {
                                r=r+"1";
                                carry=0;
                        }
                        else if(sum==2)
                        {
                                r=r+"0";
                                carry=1;
                        }
                        else if(sum==3)
                        {
                                r=r+"1";
                         carry=1;
                        }
                        else
                        {
                                r=r+"0";
                                carry=0;
                        }

                                ++i;
                        }
                }
                if(carry==1)
                        r=r+"1";
                StringBuilder res=new StringBuilder(r);
                res.reverse();
                String ans=res.toString();
        return ans;
    }
}
