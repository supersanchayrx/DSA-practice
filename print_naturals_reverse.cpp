// print n->1

#include <iostream>

int printReverse(int a)
{
    if(a==1)
    return 1;

    std::cout<<a<<", ";
    printReverse(a-1);
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<printReverse(inp);
}