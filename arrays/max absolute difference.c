/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
int maxArr(int* A, int n1) {

 int i,k=1;
// int max1=A[0]-1,min1=A[0]-1,max2=A[0]+1,min2=A[0]+1;
 int max1=A[0]-1,max2=A[0]+1,min1=A[0]-1,min2=A[0]+1;
 for(i=1;i<n1;i++)
 {
     if((A[i]-(i))>max1)
     max1=A[i]-(i+1);
     else if((A[i]-(i))<min1)
     min1=A[i]-(i+1);
     else if((A[i]+(i))>max2)
     max2=A[i]+(i+1);
     else if((A[i]+(i))<min2)
     min2=A[i]+(i+1);
 }
 if((max1-min1)>(max2-min2))
 return (max1-min1);
 else
 return (max2-min2);

 /*int i,j,sum=0;
 for(i=0;i<n1;i++)
 {
     for(j=i;j<n1;j++)
     {
         if((abs(A[i]-A[j])+abs(i-j))>sum)
         sum=(abs(A[i]-A[j])+abs(i-j));
     }
 }
 return sum;
 */
}
