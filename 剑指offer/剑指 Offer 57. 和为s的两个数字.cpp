#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int n = nums.size()-1;
        int i=0,j=n;
        while(i<=j)
        {
            if(nums[i]+nums[j]==target)
            {ret.push_back(nums[i]);ret.push_back(nums[j]);break;}
            else if(nums[i]+nums[j]>target) j--;
            else i++;
        }
        return ret;
    }
};