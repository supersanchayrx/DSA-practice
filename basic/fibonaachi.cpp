// a series of numbers where each number is the sum of the two preceding numbers
#include <iostream>

int fibSeq(int n)
{
    if(n==0)
        return 0;
    else if (n==1)
        return 1;
    
    return fibSeq(n-1)+fibSeq(n-2);
}

int main()
{
    int inp; 
    std::cin>>inp;

    std::cout<<fibSeq(inp);
}