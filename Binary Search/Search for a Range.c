/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int binarysearch(int* a,int n,int num)
 {
     int left=0;
     int right=n-1;
     int mid;
     while(left<=right)
     {
         mid=(left+right)/2;
         if(a[mid]==num)
         return 1;
         else if(a[mid]>num)
         right=mid-1;
         else
         left=mid+1;
     }
     return 0;
 }
 int lower(int* a,int n,int num)
 {
     int left=0;
     int right=n;
     int mid;
     while(left<right)
     {
         mid=(left+right)/2;
         if(a[mid]>=num)
         right=mid;
         else
         left=mid+1;
     }
     return left;
 }
 int upper(int* a,int n,int num)
 {
     int left=0;
     int right=n;
     int mid;
     while(left<right)
     {
         mid=(left+right)/2;
         if(a[mid]<=num)
         left=mid+1;
         else
         right=mid;
     }
     return left;
 }

int* searchRange(const int* A, int n1, int B, int *len1) {

    *len1=2;
     int *a=(int*)malloc(sizeof(int)*2);
    if(binarysearch(A,n1,B))
    {
    int low=lower(A,n1,B);
    int up=upper(A,n1,B);

   if(low==0&&up==0)
    {
        a[0]=-1;
        a[1]=-1;
    }
    else{
    a[0]=low;
    a[1]=up-1;}

    }
    else
    {
        a[0]=-1;
        a[1]=-1;
    }
       return a;
}
