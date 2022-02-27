/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0,j=-1;
        unordered_set<char> a;
        int ans=0;
        for(i;i<n;i++)
        {
            if(i!=0)
                a.erase(s[i-1]);
            while(j<n-1&&!a.count(s[j+1]))
            {
                a.insert(s[j+1]);
                j++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
// @lc code=end

