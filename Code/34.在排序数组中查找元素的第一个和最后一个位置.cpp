/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        int l=binarysearch(nums,target);
        int r=binarysearch(nums,target+1)-1;
        if(l!=nums.size()&&nums[l]==target) return {l,r};
        else return {-1,-1};
    }
    int binarysearch(vector<int>& nums,int target)
    {
        int i=0,j=nums.size();
        while(i<j)
        {
            int m=i+(j-i)/2;
            int mid=nums[m];
            if(mid<target) i=m+1;
            else j=m;
        }
        return i;
    }
};
// @lc code=end

