// You are given an integer n. Your task is to reverse the digits, ensuring that the reversed number has no leading zeroes.


#include <iostream>

int reverseDigitS(int n)
{
    int a=0;
    while(n>0)
    {
        a=a*10 + n%10;
        n/=10;
    }
    return a;
}

int main()
{
    int input;
    std::cin>>input;

    std::cout<<reverseDigitS(input);
}