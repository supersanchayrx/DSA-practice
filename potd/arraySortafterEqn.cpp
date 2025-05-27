// Given an integer array arr[] sorted in ascending order, along with three integers: A, B, and C. The task is to transform each element x in the array using the quadratic function A*(x2) + B*x + C. After applying this transformation to every element, return the modified array in sorted order.

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <iterator>

void printArr(std::vector<int> &arr)
{
    for(auto it:arr)
    {
        std::cout<<(it)<<" ";
    }
}

std::vector<int> sortArray(std::vector<int> &arr, int A, int B, int C)
{
        // code here
        for(int i=0; i<arr.size(); i++)
        {
            arr[i]=(A*arr[i]*arr[i])+(B*arr[i])+C; 
        }

        // for(auto it=arr.begin(); it!=arr.end(); it++)
        // {
        //     std::cout<<*(it)<<", ";
        // }
        printArr(arr);


        std::cout<<std::endl;

        sort(arr.begin(),arr.end());

        // for(auto it=arr.begin(); it!=arr.end(); it++)
        // {
        //     std::cout<<*(it)<<", ";
        // }
        printArr(arr);


        return arr;
}



int main()
{
    std::vector<int> arr = {-4, -2, 0, 2, 4};

    sortArray(arr, 1,3,5);
    //printArr(arr);
}