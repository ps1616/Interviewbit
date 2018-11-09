/**
 * @input A : 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * @input B : Integer
 *
 * @Output Integer
 */
 int binarysearch(int* a,int n,int b)
 {
     int left=0;
     int right=n-1;
     int mid;
     while(left<=right)
     {
         mid=(left+right)/2;
         if(a[mid]==b)
         return 1;
         else if(a[mid]>b)
         right=mid-1;
         else
         left=mid+1;
     }
     return 0;
 }
int searchMatrix(int** A, int n11, int n12, int B) {

    int i;
 //   if(B==A[0][0]&&n11==1&&n12==1)
  //  return 1;
    for(i=0;i<n11;i++)
    {
        int x=binarysearch(A[i],n12,B);
        if(x==1)
        return 1;

    }
    return 0;
}
