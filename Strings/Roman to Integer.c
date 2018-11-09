 int value(char x)
 {
     if(x=='I')
     return 1;
     else if(x=='V')
     return 5;
     else if(x=='X')
     return 10;
     else if(x=='L')
     return 50;
     else if(x=='C')
     return 100;
     else if(x=='D')
     return 500;
     else
     return 1000;
 }
int romanToInt(char* A) {

    int r=0;
    int i=0;
    int v1,v2;
    for(i=0;i<strlen(A);i++)
    {
        v1=value(A[i]);
        if(i+1<strlen(A))
        {
          v2=value(A[i+1]);
          if(v1>=v2)
          r+=v1;
          else
          {
              r+=(v2-v1);
              i++;
          }
        }
        else
        {
            r+=v1;
            i++;
        }
    }
    return r;

}
