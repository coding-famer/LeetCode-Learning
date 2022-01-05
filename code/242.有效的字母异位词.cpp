/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(n!=t.length())
            return false;
        vector<int> a(26,0);
        for(auto ch:s)
        {
            a[ch-'a']++;
        }
        for(auto ch:t)
        {
            a[ch-'a']--;
            if(a[ch-'a']<0)
                return false;
        }
        return true;
    }
};
// @lc code=end

