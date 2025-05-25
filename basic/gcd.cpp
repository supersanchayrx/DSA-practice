// Given two positive integers a and b, find GCD of a and b.

#include <iostream>
#include <utility>

int gcdCalc(int a, int b)
{
    std::pair<int, int> p = {a,b};

    while(p.first!=0)
    {
        if(p.first-p.second>=0)
        {
            p = {p.first-p.second, p.second};
        }
        else
        {
            p = {p.second-p.first, p.first};
        }
    }
    return p.second;
}

int gcdCalc2(int a, int b) // better
{
    //std::pair<int, int> p = {a,b};

    while(a>0 && b>0)
    {
        if(a>b) 
            a=a%b;
        else
            b=b%a;
         
        std::cout<<a<<", "<<b<<std::endl;
    }
    if(a==0)
        return b;
    else
        return a;
}

int main()
{
    int inp1, inp2;
    std::cin>>inp1; std::cin>>inp2;

    std::cout<<gcdCalc2(inp1,inp2);
}