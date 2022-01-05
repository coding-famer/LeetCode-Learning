/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> a;
        for(string str:strs)
        {
            string tmp=str;
            sort(tmp.begin(),tmp.end());
            a[tmp].push_back(str);
        }
        for(auto x:a)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
// @lc code=end

