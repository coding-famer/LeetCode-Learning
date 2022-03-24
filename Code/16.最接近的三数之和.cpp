/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int aabs=INT_MAX;
        int res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int tt = target-nums[i];
            int k=n-1;
            for(int j=i+1;j<n;j++)
            {
                while(j<k&&nums[j]+nums[k]>tt) k--;
                if((j!=k&&nums[j]+nums[k]==tt)||(k<n-1&&nums[j]+nums[k+1]==tt)) return target;
                if(k<n-1&&abs(tt-nums[j]-nums[k+1])<aabs)
                {
                    aabs=abs(tt-nums[j]-nums[k+1]);
                    res=nums[i]+nums[j]+nums[k+1];
                }
                if(j==k) break;
                if(abs(tt-nums[j]-nums[k])<aabs)
                {
                    aabs=abs(tt-nums[j]-nums[k]);
                    res=nums[i]+nums[j]+nums[k];
                }
            }
        }
        return res;
    }
};
// @lc code=end

