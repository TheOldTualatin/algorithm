//
// Created by YangQX on 2021/12/4.
//
#include <iostream>
#include "algorithm"
#include "vector"
#include "map"
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums,int target)
    {
        map<int,int> hashTable;
        for(int i=0;i<nums.size();i++)
        {
            auto it = hashTable.find(target-nums[i]);
            if(it!=hashTable.end())
                return {it->second,i};
            hashTable[nums[i]] = i;
        }
        return vector<int>{};
    }
};
