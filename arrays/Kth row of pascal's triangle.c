/**
 * @input A : Integer
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* getRow(int A, int *len1) {
    int *a=(int*)malloc((A+1)*sizeof(int));
      int i,j;
     // a[0]=1;
      j=1;
      for(i=0;i<=A;i++)
      {
          a[i]=j;
          j=j*(A-i)/(i+1);
      }
   *len1=A+1;
    return a;
}
