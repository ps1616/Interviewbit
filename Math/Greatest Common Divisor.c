/**
 * @input A : Integer
 * @input B : Integer
 *
 * @Output Integer
 */
int gcd(int A, int B) {

    if(B==0)
    return;
    else
    gcd(B,A%B);
}
