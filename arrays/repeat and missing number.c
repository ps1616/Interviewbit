/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* repeatedNumber(const int* A, int n1, int *len1) {

 int *C=(int*)malloc(sizeof(int)*2);
 long long int i,j;
 long long int sumarr=0,sqsumarr=0,sum=0,sqsum=0;
 long long int a=0,b=0;
 long long int n=n1;
 for(i=0;i<n;i++)
 {
     sumarr+=(long long int)(A[i]);
     sqsumarr=sqsumarr+((long long int)A[i]*(long long int)A[i]);
 }
 for(i=1;i<=n;i++)
 {
     sum+=(long long int)i;
     sqsum=sqsum+(long long int)(i*i);
 }
 a=(int)((((sqsumarr-sqsum)/(sumarr-sum))+sumarr-sum)/2);
 b=(int)((((sqsumarr-sqsum)/(sumarr-sum))-sumarr+sum)/2);
 C[0]=a;
 C[1]=b;
 *len1=2;
 return C;
}
