vector<string> Solution::fizzBuzz(int A) {

    int i;
    vector<string> v;
    for(i=1;i<=A;i++)
    {
        if(i%3==0&&i%5==0)
        v.push_back("FizzBuzz");
        else if(i%3==0)
        v.push_back("Fizz");
        else if(i%5==0)
        v.push_back("Buzz");
        else
        v.push_back(i);
    }
    return v;
}
