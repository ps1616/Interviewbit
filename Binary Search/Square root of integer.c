/**
 * @input A : Integer
 *
 * @Output Integer
 */
int Sqrt(int A) {

    long int left=0;
    long int right=A;
    long int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if((mid*mid)==A)
        return mid;
        if((mid*mid)>=A)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }

    }
    return (int)right;
}
