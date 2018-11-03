int Solution::titleToNumber(string A) {

    int t=0,i;
    int l=A.length();
    for(i=0;i<l;i++)
    t=26*t+(A[i]-'A'+1);
    return t;
}
