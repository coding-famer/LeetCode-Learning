/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int n:nums)
        {
            if(s.find(n)!=s.end()) return true;
            s.insert(n);
        }
        return false;
    }
};
// @lc code=end

