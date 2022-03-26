/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            int mid=nums[m];
            if(mid==target) return m;
            if(mid>=nums[l])
            {
                if(target>=nums[l]&&target<mid) r=m-1;
                else l=m+1;
            }
            else
            {
                if(target>mid&&target<=nums[r]) l=m+1;
                else r=m-1;
            }
        }
        return -1;
    }
};
// @lc code=end

