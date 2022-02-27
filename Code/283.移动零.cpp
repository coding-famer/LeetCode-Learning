/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int p=0;
        while(p<n)
        {
            if(nums[p]!=0)
            {
                nums[count]=nums[p];
                count++;
            }
            p++;
        }
        for(int i=count;i<n;i++)
            nums[i]=0;
    }
};
// @lc code=end

