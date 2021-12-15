#include <iostream>
using namespace std;
#include "L26_RemoveDuplicates.cpp"
int main()
{
    Solution solution = Solution();
    vector<int> nums = {};
    cout<<solution.removeDuplicates(nums)<<endl;
    for(int num :nums)
    {
        cout<<num;
    }
}
