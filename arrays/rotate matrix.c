/**
 * @input A : 2D integer array
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 *
 * @Output Void. Just modifies the args passed by reference
 */
void rotate(int** a, int n11, int n12) {
    int i,j;
    int n=n11;
    for(i=0;i<n11/2;i++)
    {
        for(j=i;j<n12-1-i;j++)
        {
            int t=a[i][j];
            a[i][j]=a[n11-1-j][i];
            a[n11-1-j][i]=a[n11-1-i][n11-1-j];
            a[n11-1-i][n11-1-j]=a[j][n11-1];
            a[j][n11-1]=t;

        /*    t=a[i][j];
            a[i][j]=a[n-1-i][n-1-j];
            a[n-1-i][n-1-j]=a[j][n-1-j];
            a[j][n-1-j]=t;
            */
        }
    }


 /*   for(i=0;i<n11;i++)
    {
        for(j=0;j<n12;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */
    return a;

}
