//
// Created by YangQX on 2021/12/11.
//
#include "iostream"
#include "vector"
#include "set"
using namespace std;
class Solution{
//    [0,0,1,1,1,2,2,3,3,4]
/**
 * 0,0,1,1,1,2,2,3,3,4
 * []
 */
public:
    int removeDuplicates(vector<int>& nums) {
        int front = 0,before = 1;
        while (before<nums.size())
        {
            if(nums[front]!=nums[before])
                nums[++front] = nums[before];
            before++;
        }
        if(nums.size()==0)
            return 0;
        return front+1;
    }
};