#include<vector>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while(nums[i]==i)i++;
        for(;i<nums.size();i++)
        {
            if(nums[i]==i)continue;
            if(nums[i]==nums[nums[i]]) return nums[i];
            swap(nums[i],nums[nums[i]]);
            i--;
        }
        return -1;
    }
};