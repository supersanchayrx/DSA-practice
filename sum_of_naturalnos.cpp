// problem to find the sum of natural numbers
#include <iostream>

int sum(int a)
{
    if(a<=0)
    {
        return 0;
    }

    return a+sum(a-1);
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<sum(inp);
}