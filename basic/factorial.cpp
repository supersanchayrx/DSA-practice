// find factorial of a given int

#include<iostream>

int fact(int a )
{
    if(a==0)
    return 1;

    return a*fact(a-1);
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<fact(inp);
}