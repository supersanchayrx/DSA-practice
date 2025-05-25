// You are given a 3-digit number n, Find whether it is an Armstrong number or not. eg 371 where 3^3 + 7^3 + 1^3 = 371

#include <iostream>

bool armstrongCheck(int n)
{
    int temp = n;
    int sum = 0;
    while(temp>0)
    {
        int a = temp%10;
        sum=sum+(a*a*a);

        temp/=10;
    }

    return (sum==n) ? true : false ;
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<armstrongCheck(inp);
}