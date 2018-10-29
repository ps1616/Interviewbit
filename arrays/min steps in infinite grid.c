/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 *
 * @Output Integer
 */
int coverPoints(int* A, int n1, int* B, int n2) {

    int i,diffx=0,diffy=0,count=0;
    for(i=0;i<n1-1;i++)
    {
        diffx=A[i+1]-A[i];
        diffy=B[i+1]-B[i];
        if(diffx<0)
        diffx=-diffx;
        if(diffy<0)
        diffy=-diffy;
        if(diffx>diffy)
        count+=diffx;
        else
        count+=diffy;
    }
    if(count<0)
    count=-count;
    return count;
}
