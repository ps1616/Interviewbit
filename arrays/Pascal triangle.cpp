vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> a(A);
    int i,j,sum=0;
    if(A==0)
    return a;
    a[0].push_back(1);
    for(i=1;i<A;i++)
    {
        a[i].push_back(1);
        for(j=1;j<i;j++)
        {
                sum=a[i-1][j-1]+a[i-1][j];
                a[i].push_back(sum);

        }
        a[i].push_back(1);
    }
    return a;
}
