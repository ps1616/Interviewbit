/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 *
 * @Output Integer
 */
int strStr(const char* A, const char* B) {

 /*   int l=strlen(A);
 int i=0,j=0;
 while(i<l)
 {
   if(A[i]==B[j])
   j++;
   else if(A[i]!=B[j])
  {
      j=0;
  }
   if(B[j]=='\0')
   break;
   i++;
 }
 if(i==l)
    return i-strlen(B);
  i=i-strlen(B)+1;
  if(i>=0)
    return i;
 if(B[j]!='\0')
    return -1;
    */
    int x=strlen(A);
    int y=strlen(B);
    int i,flag=0;
    for(i=0;i<x;i++)
    {
        flag=0;
        if(A[i]==B[0])
        {
            int j=i+1;
            int k=1;
            while(k<y)
            {
                if(A[j]!=B[k])
                {
                    flag=1;
                    break;
                }
                k++;
                j++;
            }
            if(flag==0)
                return i;
        }

    }
    return -1;
}
