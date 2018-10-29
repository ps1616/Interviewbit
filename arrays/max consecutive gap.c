/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
 int comp1(void *x,void *y)
 {
     return *((int*)y-*((int*)x;
 }
int maximumGap(const int* A, int n1) {

    int i,t=0,diff=0;
    int* b=(int*)malloc(sizeof(int)*n1);
    for(i=0;i<n1;i++)
    b[i]=A[i];
    qsort(b,n1,sizeof(int),comp1);
    for(i=0;i<n1-1;i++)
    {
        diff=b[i+1]-b[i];
        if(t<diff)
        t=diff;
    }
    return t;
}
