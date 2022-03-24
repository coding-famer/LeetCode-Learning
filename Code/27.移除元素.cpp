/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size();
        while(i<j)
        {
            if(nums[i]==val)
                nums[i]=nums[--j];
            else
                i++;
        }
        return i;
    }
};
// @lc code=end

