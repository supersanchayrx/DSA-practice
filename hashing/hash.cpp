// basic hash
#include <iostream>
#include <utility>
#include <iterator>
#include <string.h>
#include <string>
#include <algorithm>

int main()
{

    std::string s;
    std::cin>>s;

    int hash[256] ={0};
    for(int i : s)
    {
        //here the i is actual character values i.e the converted int ascii values from the string s. Like imagine s was abc so i would be a ka ascii value ##, b ka, then c ka## so in the hash[i] you dont need to put hash[s[i]];
        hash[i]++;
    }

    for(int i=0; i<s.size(); i++)
    { // here as its obvious its the index only
        hash[s[i]]++; //s[i] gives the char which is then typecasted into int automatically and passed onto int index to hash[] which then increments that index's value
    }

    char a;
    std::cin>>a;
    std::cout<<hash[a];

}