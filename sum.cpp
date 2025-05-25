// sum of n numbers in both parameterized as well as function method

#include<iostream>

void sumParam(int a, int b)
{
    if(a==0)
    {
        std::cout<<b;
        return ;
    }

    sumParam(a-1,b+a);
}

int sumFunc(int a)
{
    if(a==0)
        return 0;
    
    return a+sumFunc(a-1);
}

int main()
{
    int inp;
    std::cin>>inp;

    sumParam(inp,0);
    std::cout<<std::endl;
    std::cout<<sumFunc(inp);
}