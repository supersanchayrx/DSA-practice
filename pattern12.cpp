#include <iostream>
using namespace std;

void numberCrown(int n) {
    // Write your code here.

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            //if(j!=0)
            cout<<j<<" ";
        }

        for(int k=0; k<=n-2*i+3; k++)
        {
            cout<<" "<<" ";
        }

        for(int l=i; l>0; l--)
        {
            cout<<l<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int n;

    cin>>n;

    numberCrown(n);

    return 0;
}