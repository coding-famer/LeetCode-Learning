// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem26.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,j=0;
        int len = nums.size();
        if (len==0)
        return 0;
        while(j<len)
        {
            if(nums[i]==nums[j])
                j++;
            else
                nums[++i]=nums[j++];
        }
        return i+1;
    }
};
// @lc code=end

