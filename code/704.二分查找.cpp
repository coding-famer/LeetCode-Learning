// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem704.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return s(nums,0,n-1,target);
    }
    int s(vector<int>& nums,int l,int r,int target)
    {
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = (high - low) / 2 + low;
            int num = nums[mid];
            if (num == target) {
                return mid;
            } else if (num > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

