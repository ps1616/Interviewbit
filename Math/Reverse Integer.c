/**
 * @input A : Integer
 *
 * @Output Integer
 */
int reverse(int A) {
    int x=A,rem,rev=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(A<0)
    {
        rev=rev*-1;
        return rev;
    }
    else
    return rev;
}
