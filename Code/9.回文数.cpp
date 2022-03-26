/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x!=0&&x%10==0)) return false;
        int res=0;
        while(x>res)
        {
            res=res*10+x%10;
            x/=10;
        }
        if(res==x||res/10==x) return true;
        return false;
    }
};
// @lc code=end

