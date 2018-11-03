/**
 * @input A : Integer
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int isprime(int n)
 {
     int i;
     for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
         return 0;
     }
     return 1;
 }
int* primesum(int A, int *len1) {

    int i,j,num;
    for(i=2;i<=(A);i++)
    {
        if(isprime(i))
        {
            if(isprime(A-i))
            {
              num=i;
              break;
            }
        }
    }
        *len1=2;
        int *a=(int*)malloc(sizeof(int)*(*len1));
        a[0]=num;
        a[1]=A-num;
        return a;

}
