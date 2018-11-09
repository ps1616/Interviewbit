/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer
 */
int searchInsert(int* A, int n1, int B) {

    int left=0;
    int right=n1-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(A[mid]==B||(A[mid-1]<B&&A[mid+1]>B&&mid>0))
        return mid;
        else if(A[mid]>B)
        right=mid-1;
        else
        left=mid+1;
    }
    if(B>A[n1-1])
    return n1;
    if(B<A[0])
    return 0;
}
