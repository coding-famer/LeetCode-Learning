/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
public:
    int partition(vector<int>& nums,int low,int high)
    {
        int tmp=nums[low];
        while(low<high)
        {
            while(low<high&&nums[high]<=tmp)
            {
                high--;
            }
            if(low>=high)
                break;
            else
                nums[low]=nums[high];
            while(low<high&&nums[low]>=tmp)
            {
                low++;
            }
            if(low>=high)
                break;
            else
                nums[high]=nums[low];
        }
        nums[low]=tmp;
        return low;
    }
    int kth(vector<int>& nums,int low,int high,int k)
    {
        int p=partition(nums,low,high);
        if(p-low+1>k)
            return kth(nums,low,p,k);
        else if(p-low+1<k)
            return kth(nums,p+1,high,k-p+low-1);
        else 
            return nums[p];
        
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        return kth(nums,0,n-1,k);
    }
};
// @lc code=end

