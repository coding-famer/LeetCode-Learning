// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem238.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n);
        l[0] = 1;
        for (int i = 1; i < n;i++)
        {
            l[i] = nums[i-1] * l[i - 1];
        }
        int mul = 1;
        for (int i = n - 2; i >= 0;i--)
        {
            mul = mul * nums[i + 1];
            l[i] = l[i] * mul;
        }
        return l;
    }
};
// @lc code=end

