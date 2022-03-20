/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int l=strs[0].length();
        if(!n) return "";
        for(int i=0;i<l;i++)
        {
            char c=strs[0][i];
            for(int j=1;j<n;j++)
            {
                if(i==strs[j].length()||strs[j][i]!=c)
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};
// @lc code=end

