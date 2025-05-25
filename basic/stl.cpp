#include <iostream>
#include <algorithm>
#include <iterator>
#include <functional>

//using namespace std;

bool comp(std::pair<int,int>p1, std::pair<int,int>p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first>p2.first) return true;
    return false;
}

int  main()
{
    // int arr[] = {5,2,3,66,32};

    // //int* ptr = &arr[0]; -> not needed as arr by default points to its 0th index value

    // std::sort(arr, arr+5, std::greater<int>());

    // for (auto it : arr)
    // {
    //     std::cout<<it<<" ";
    // }

    std::pair<int, int> p[] = {{1,2}, {2,1}, {4,1}};

    std::sort(p, p+3, comp);

    //sort accoding to second element 
    //if second element is the same sort according to first element but in decreasing

    for(auto it : p)
    {
        std::cout<<it.first<<","<<it.second<<" ";
    }

}

