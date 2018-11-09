/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer
 */

 int sum(int *a,int n)
 {
     int i,t=0;
     for(i=0;i<n;i++)
     t+=a[i];
     return t;
 }
int books(int* A, int n1, int B) {

    int total=sum(A,n1);
    int left=0;
    int right=total;
    int mid;
    if(B>n1)
    return -1;
    while(left<=right)
    {
        mid=(left+right)/2;
        int i,s=0,count=0;
        for(i=0;i<n1;i++)
        {
            s=s+A[i];
            if(s>=mid)
            {
                ++count;
                i=i-1;
                //t=s-A[i];
                s=0;
                if(count>=B)
                break;
            }

         }
     //  if(s!=0)
      // ++count;
        if(count>=B)
        left=mid+1;
        else
        right=mid-1;


    }
    return right;

}
