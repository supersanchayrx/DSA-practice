// print from 1->n

#include <iostream>

int printNaturals(int i, int a)
{
    if(i==a)
        return a;
    
    std::cout<<i<<", ";
    i++;
    printNaturals(i++,a);
}

int main()
{
    int inp;
    std::cin>>inp;

    std::cout<<printNaturals(1,inp);
}