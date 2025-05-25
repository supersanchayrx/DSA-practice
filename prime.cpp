// Given a number n, determine whether it is a prime number or not.

#include <iostream>

bool checkPrime(int n)
{   
    int count = 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) count++;
    }

    std::cout<<count;
    return (count) ? true : false;   
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<checkPrime(inp);
}