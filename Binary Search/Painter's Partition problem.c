/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer array
 * @input n3 : Integer array's ( C ) length
 *
 * @Output Integer
 */
 long int sum(int* A,int n)
 {
    long int i,s=0;
     for(i=0;i<n;i++)
     s+=A[i];
     return s;
 }
int paint(int A, int B, int* C, int n3) {

    long int left=0;
    long int right=sum(C,n3);
    long int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        int count=0,i,s=0;
        for(i=0;i<n3;i++)
        {
            s+=C[i];
            if(s>=mid)
            {
                s=0;
                --i;
                ++count;
                if(count>=A)
                break;
            }
        }
        if(count>=A)
        left=mid+1;
        else
        right=mid-1;
    }

    return (right*B)%10000003;
}
