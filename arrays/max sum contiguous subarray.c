/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
int maxSubArray(const int* A, int n1) {

   // int *a=(int*)malloc(n1*sizeof(int));
    int i,j,k,max_cur=0,max_tillnow=0;
    if(n1==1)
    return A[0];
    for(i=0;i<n1;i++)
    {
        max_cur+=A[i];
        if(max_cur<0)
        max_cur=0;
        if(max_cur>max_tillnow)
        max_tillnow=max_cur;

    }
    return max_tillnow;
}
