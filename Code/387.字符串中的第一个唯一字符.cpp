/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,int> a;
        for(char c:s)
        {
            a[c]++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[s[i]]==1)
                return i;
        }
        return -1;
    }
};
// @lc code=end

