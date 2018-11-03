/**
 * @input A : Integer
 *
 * @Output Integer
 */
int trailingZeroes(int A) {

    long long int t=A,p=5,count=0;
    while(t>=0)
    {
        t=A/p;
        if(t==0)
        break;
        count+=t;
        p=p*5;
    }
    return count;
}
