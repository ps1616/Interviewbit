/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* wave(int* A, int n1, int *len1) {
    int i,j;
    int *b=(int*)malloc(n1*sizeof(int));
    if(n1<=1)
    {
        *len1=1;
        b[0]=A[0];
        return b;
    }

    else
    {
        for(i=0;i<n1;i++)
    {
        for(j=0;j<n1-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }

  //  int *b=(int*)malloc(n1*sizeof(int));

    for(i=0;i<n1-1;i=i+2)
    {
       int k=A[i];
       A[i]=A[i+1];
       A[i+1]=k;
    }
    *len1=n1;
    return A;
    }
}
