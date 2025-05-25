#include <iostream>
using namespace std;

int digitCount(int n)
{
    int a=0;

    while(n>1)
    {
        n = n/10;
        a++;
    }
    return a;
}

int main()
{
    int x;
    cin>>x;

    cout<<digitCount(x);
}

