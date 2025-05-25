// Given an integer N, print all the divisors of N in the ascending order.

#include <iostream>
#include <utility>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cmath>

void divisiorsList(int n)
{
    std::vector<int> divisors;
    int og = n;
    for(int i = 1;i<=sqrt(n); i++)
    {
        if(og%i == 0)
        {
            divisors.emplace_back(i);
            if(i!=og/i)
            {
                divisors.emplace_back(og/i);
            }
        }
    }

    std::sort(divisors.begin(), divisors.end());

    for(auto divisor : divisors)
    {
        std::cout<<divisor<<" ";
    }
}

int main()
{
    int inp;
    std::cin>>inp;

    divisiorsList(inp);
}
