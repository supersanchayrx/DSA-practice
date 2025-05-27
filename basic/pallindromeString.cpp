// Given a string s, return true if the string is palindrome, otherwise false.

#include <iostream>
#include <string>
#include <string.h>

bool pallindromeCheck1(std::string& s)
{
    //for loop method
    for(int i=0; i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        return false;
    }

    return true;
}

int main()
{
    std::string inp;
    std::cin>>inp;

    std::cout<<pallindromeCheck1(inp);
}