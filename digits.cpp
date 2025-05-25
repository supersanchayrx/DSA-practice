//Given a natural number n. You have to find the number of digits in it and return it.

#include <iostream>
#include <cmath>

int digitCount(int n)
{
    int count = 0;
    
    while(n>0)
    {
        n /=10;
        count++;
    }
    return count;
}

int digitCountLog(int n)
{
    return int(log10(n)+1);
}

int main()
{
    int input;
    std::cin>>input;

    std::cout<<digitCountLog(input);
}