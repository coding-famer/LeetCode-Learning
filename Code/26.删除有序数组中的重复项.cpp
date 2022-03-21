
/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        while(j<n)
        {
            if(nums[j]==nums[i]) j++;
            else nums[++i]=nums[j++];
        }
        return i+1;
    }
};
// @lc code=end

