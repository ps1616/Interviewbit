/**
 * @input A : Integer
 *
 * @Output Integer
 */
int isPalindrome(int A) {

    int x=A,rev=0,rem=0;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(rev==A&&A>=0)
    return 1;
    else
    return 0;
}
