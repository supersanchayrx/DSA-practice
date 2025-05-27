// Given an array, arr[]. Sort the array using bubble sort algorithm.

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

void printArr(std::vector<int> &arr)
{
    bool first = true;
    for(auto it : arr)
    {
        if(!first)
        std::cout<<", ";

        std::cout<<it;
        first = false;
    }

    std::cout<<std::endl;
}

void sortArr(std::vector<int> &arr)
{
    for(int i=arr.size()-1; i>=1; i--)
    {
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j]>arr[j+1])
            std::swap(arr[j], arr[j+1]);
        }
    }
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
        arr.emplace_back(inp);
    }

    printArr(arr);
    sortArr(arr);
    printArr(arr);
}