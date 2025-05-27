// hashing using maps

#include <iostream>
#include <utility>
#include <iterator>
#include <vector>
#include <string>
#include <string.h>
#include <map>
#include <unordered_map>


void printArr(std::vector<int> &arr)
{
    bool first = true;
    for(auto it : arr)
    {   
        if(!first) 
        std::cout<<",";

        std::cout<<it;
        first = false;
    }
}

int mostFrequentElement(std::vector<int>& nums) {

        int max = INT_MIN;

        std::unordered_map<int,int> umpp;
        for(auto it: nums)
        umpp[it]++;

        for(auto it:nums)
        {
            if(umpp[it]>max)
            max = it;
        }

        return max;
    }


int main()
{
    int n=0;
    std::cin>>n;

    std::vector<int>arr;

    while(n--) //taking int arr input
    {
        int inp;
        std::cin>>inp;
        arr.push_back(inp);
    }

    std::cout<<mostFrequentElement(arr)<<std::endl;

    printArr(arr);
    std::cout<<std::endl;

    //hashing
    std::map<int,int> mpp;
    for(auto it : arr)
    mpp[it]++;

    //fetching
    for(auto it : mpp)
    std::cout<<it.first<<"->"<<it.second<<std::endl;

    std::string s; //taking string input
    std::cin>>s;

    std::map<char,int> cmpp; //pre computing hashing
    for(int it:s)
    cmpp[it]++;

    for(auto it:cmpp) //fetching
    std::cout<<it.first<<"->"<<it.second<<std::endl;

    std::unordered_map<char,int> ucmpp;
    
}