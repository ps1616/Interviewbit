/**
 * @input A : Integer
 *
 * @Output Integer
 */
int isPower(int A) {

    int i,j;
    if(A==1)
    return 1;
    for(j=2;j<65536;j++)
    {
      for(i=2;i<32;i++)
    {
        if(pow(j,i)==A)
        return 1;
    }
    }

    return 0;
}
