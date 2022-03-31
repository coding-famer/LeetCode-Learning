/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n;
        while(l<r)
        {
            int m=l+(r-l)/2;
            int mid=nums[m];
            if(mid==target) return m;
            else if(mid<target) l=m+1;
            else r=m;
        }
        return l;
    }
};
// @lc code=end

