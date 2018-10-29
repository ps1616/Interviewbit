/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer
 */
 int comp1(void *x,void *y)
 {
     return *((int*)x)-*((int*)y);
 }
int solve(int* A, int n1) {

 /*   int i,j,count=0,num=0,flag=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(A[i]==A[j]&&i!=j)
            {
                int k=j;
                while(j<n1)
                {
                    A[k]=A[k+1];
                    j++;
                }
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        num=A[i];
        count=0;
        for(j=0;j<n1;j++)
        {
            if(A[j]>num)
            ++count;
        }
        if(count==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return 1;
    else
    return -1;
*/
int i,j,flag=0;
qsort(A,n1,sizeof(int),comp1);
int k,count=0;

for(i=0;i<n1;i++)
{
    if(i<n1-1&&A[i]==A[i+1])
    continue;
    if(abs(A[i])==(n1-1-i))
    return 1;
}
if(A[n1-1]==0)
return -1;
return -1;

}
