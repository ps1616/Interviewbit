/**
 * @input A : 2D integer array
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 *
 * @Output Void. Just modifies the args passed by reference
 */
void setZeroes(int** A, int n11, int n12) {

    int i,j,r1=0,c1=0;
    for(i=0;i<n12;i++)
    {
        if(A[0][i]==0)
        {
            r1=1;
            break;
        }
    }
     for(i=0;i<n11;i++)
    {
        if(A[i][0]==0)
        {
            c1=1;
            break;
        }
    }

    for(i=1;i<n11;i++)
    {
        for(j=1;j<n12;j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    for(i=1;i<n11;i++)
    {
        for(j=1;j<n12;j++)
        {
            if(A[i][0]==0||A[0][j]==0)
            A[i][j]=0;
        }
    }
    if(r1==1)
    {
        for(i=0;i<n12;i++)
        A[0][i]=0;
    }
    if(c1==1)
    {
        for(i=0;i<n11;i++)
        {
            A[i][0]=0;
        }
    }

}
