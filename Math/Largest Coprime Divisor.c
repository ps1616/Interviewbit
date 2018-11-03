/**
 * @input A : Integer
 * @input B : Integer
 *
 * @Output Integer
 */
/* int isprime(int n)
 {
     int i;
     for(i=2;i<=sqrt(n);i++)
     {
         if(n%i==0)
         return 0;
     }
     return 1;
 }
 */
 int gcd(int x,int y)
 {
     if(y==0)
     return x;
     else
     return gcd(y,x%y);
 }
int cpFact(int A, int B) {
  /*  int x,i;
    if(isprime(A)&&isprime(B))
    {
        if(A==B)
        return 1;
        else
        return (A<B?A:B);
    }
    if(isprime(B))
    return A;

    int ans;
    for( i=1;i<=A;i++)
    {
        int f=isprime(i);
        if(f==1)
        {
            if(A%i==0){
            x=i;
            int g=gcd(x,B);
            if(g==1)
            ans=i;
            }
        }
    }
    return ans;
    */
    while(gcd(A,B)!=1)
    {
        int x=gcd(A,B);
        A=A/x;
    }
    return A;
}
