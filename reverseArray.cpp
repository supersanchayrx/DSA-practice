// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <iterator>

void reverse(std::vector<int> &arr)
{
    //loop method single pointer
    for(int i=0; i<arr.size()/2;i++)
    {
        std::swap(arr[i], arr[arr.size()-i-1]);
    }
}

void reverse2(std::vector<int> &arr)
{
    //loop method 2 pointers
    int i =0; int j = arr.size()-1;
    while(i<j)
    {
        std::swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void reverse3(std::vector<int> &arr, int a, int b)
{
    //recursion swap using 2 pointers
    if(a>=b)
    return ;

    std::swap(arr[a], arr[b]);
    //std::cout<<"spawpping";
    reverse3(arr, ++a, --b);
}

void reverse4(std::vector<int> &arr, int i)
{
    //recursion swap using 1 pointers
    if(i>arr.size()/2)
    return ;

    std::swap(arr[i], arr[arr.size()-i-1]);
    reverse4(arr,++i);
}

void printArr(std::vector<int> &arr)
{
    for(auto it = arr.begin(); it!=arr.end(); it++)
    {
        if(it==arr.end()-1)
        {
            std::cout<<*(it);
            return ;
        }    
        std::cout<<*(it)<<", ";
    }
}

int main()
{
    std::vector<int> arr = {1,2,3,4,5};

    reverse(arr);
        printArr(arr);
    std::cout<<std::endl;
    reverse2(arr);
        printArr(arr);
    std::cout<<std::endl;
    reverse3(arr,0,arr.size()-1);
        printArr(arr);
    std::cout<<std::endl;
    reverse4(arr,0);
        printArr(arr);
    std::cout<<std::endl;
}

