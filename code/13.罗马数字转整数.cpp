/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
    private:
    unordered_map<char, int> symbolValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
public:
    int romanToInt(string s) {
        int n=s.length();
        int max=0;
        int ret=0;
        for(int i=n-1;i>=0;i--)
        {
            int si=symbolValues[s[i]];
            if(si>=max)
            {
                max=si;
                ret=ret+si;
            }
            else
                ret-=si;
        }
        return ret;
    }
};
// @lc code=end

