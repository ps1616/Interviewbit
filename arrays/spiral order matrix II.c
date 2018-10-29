/**
 * @input A : Integer
 *
 * @Output 2D int array. You need to malloc memory. Fill in len1 as row, len2 as columns
 */
int ** generateMatrix(int A, int *len1, int *len2) {

     int **b=(int**)malloc(A*A*sizeof(int));
    int k;
    for(k=0;k<A;k++)
    {
        b[k]=(int*)malloc(A*sizeof(int));
    }
    int i,num=1;
    int top=0,right=A-1,bottom=A-1,left=0;
    while(left<=right&&top<=bottom)
    {
        for(i=left;i<=right;i++)
        {
            b[top][i]=num;
            ++num;
        }
        top++;
        if(top>bottom)
        break;
        for(i=top;i<=bottom;i++)
        {
            b[i][right]=num;
            ++num;
        }
        right--;
        for(i=right;i>=left;--i)
        {
            b[bottom][i]=num;
            ++num;
        }
        bottom--;
        for(i=bottom;i>=top;--i)
        {
            b[i][left]=num;
            ++num;
        }
        ++left;
    }
    *len1=A;
    *len2=A;
    return b;
}
