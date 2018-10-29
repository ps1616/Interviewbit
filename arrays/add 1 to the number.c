vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> a;
    int l=A.size(),carry=1,i;
    for(i=l-1;i>=0;--i)
    {
        int sum;
        sum=A[i]+carry;
        carry=sum/10;
        a.push_back(sum%10);
    }
    if(carry>0)
    a.push_back(1);
    int s=a.size();
    vector<int> res;
    i=s-1;
        while(i>=0 && a[i]==0)
    {
        i--;
    }
    while(i>=0)
    {
        res.push_back(a[i]);
        --i;
    }
    return res;
}
