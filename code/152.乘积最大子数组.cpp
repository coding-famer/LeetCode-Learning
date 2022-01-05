// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem152.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxf=nums[0];
        int minf=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            int ma=maxf,mi=minf;
            maxf = max(ma*nums[i],max(nums[i],mi*nums[i]));
            minf = min(ma*nums[i],min(nums[i],mi*nums[i]));
            ans=max(ans,maxf);
        }
        return ans;
    }
};
// @lc code=end

