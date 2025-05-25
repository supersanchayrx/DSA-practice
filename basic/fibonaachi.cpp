// a series of numbers where each number is the sum of the two preceding numbers
#include <iostream>

int fibSeq(int a, int b)
{
    if(a>=b)
        return 0;
    
    a++;
    return (fibSeq(a,b-1)+fibSeq(a,b-2));
}

int main()
{
    int inp; 
    std::cin>>inp;

    std::cout<<fibSeq(0,inp);
}