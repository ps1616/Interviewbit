string Solution::countAndSay(int n) {
      int k=0;
    int i,j;
    string prev="1";
    if(n==1)
        return prev;
    string newstring;
    for(i=1;i<n;i++)
    {
        j=0;
        k=0;
        char mychar=prev[j];
        int count=0;
        newstring="";
        while(prev[j]!='\0')
        {
            if(prev[j]==mychar)
             {
                  count++;

             }
            else
            {
                char ch=count+'0';
                newstring=newstring+ch;
                newstring=newstring+mychar;
                count=1;
                mychar=prev[j];
            }
            j++;
        }
         char ch=count+'0';
                newstring=newstring+ch;
                newstring=newstring+mychar;
        prev=newstring;

    }

    return newstring;
}

