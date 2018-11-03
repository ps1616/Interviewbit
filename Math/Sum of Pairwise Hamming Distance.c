/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
int hammingDistance(const int* A, int n1) {

    long long int i,count=0,num=0,j,k;
    long long int sum=0;
    for(i=0;i<32;i++)
    {
        count=0;
            for(k=0;k<n1;k++)
            {
                if(A[k]&(1<<i))
                ++count;
            }
            sum+=count*(n1-count)*2;
            sum%=1000000007;
    }
    return (int)sum;
}
