// You are given an integer n. Your task is to determine whether it is a palindrome.

#include <iostream>

bool pallindromeCheck(int n)
{   
    int temp=n;
    int a=0;
    while(temp>0)
    {
        a=a*10 + temp%10;
        temp/=10;
    }

    return (a==n) ? true : false;
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<pallindromeCheck(inp);
}