/*
 * @lc app=leetcode.cn id=334 lang=cpp
 *
 * [334] 递增的三元子序列
 */

// @lc code=start
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX;
        int mid = INT_MAX;
        for (int i = 0; i < n;i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
            }
            else if(nums[i]>min&&nums[i]<mid)
            {
                mid = nums[i];
            }
            else if(nums[i]>min&&nums[i]>mid)
                return true;
        }
        return false;
    }
};
// @lc code=end

