/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
#include<vector>
#include<unordered_map>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> count;
        vector<int> ret;
        for(int n:nums1)
        {
            count[n]++;
        }
        for(int m:nums2)
        {
            if(count[m]>0)
            {
                ret.push_back(m);
                count[m]--;
            }
        }
        return ret;
    }
};
// @lc code=end

