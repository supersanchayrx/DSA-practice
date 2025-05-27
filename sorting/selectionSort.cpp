// Given an array arr, use selection sort to sort arr[] in increasing order.

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <iterator>


void printArr(std::vector<int> & arr)
{
    bool first =false;
    for(auto it : arr)
    {
        if(first)
        std::cout<<", ";

        std::cout<<it;
        first = true;
    }
    
    std::cout<<std::endl;
}

std::vector<int> sortArr(std::vector<int> &arr)
{
    for(int i =0; i<arr.size()-2; i++)
    {
        for(int j = i; j<arr.size()-1; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}


int main()
{
    int inpCount;
    std::cin>>inpCount;

    std::vector<int> arr;

    while(inpCount--)
    {
        int inp;
        std::cin>>inp;
        arr.push_back(inp);
    }

    printArr(arr);
    sortArr(arr);
    printArr(arr);
}