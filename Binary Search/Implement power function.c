/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 *
 * @Output Integer
 */

int powmod(int x, int n, int d) {

    if(x==0)
    return 0;
    if(n==0)
    return 1;
   long long int t=1;
    long long int a=x;
    while(n>0)
    {
        if(n%2==1)
        {
            t=(t*a)%d;
            n--;
        }
        else
        {
            a=(a*a)%d;
            n/=2;
        }
    }
    return (t%d);
}
