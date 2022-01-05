/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r=0;
        uint32_t x=n;
        while(x!=0)
        {
            if(x%2==1)
                r=r<<1+1;
            x=x>>1;
        }
        return r;
    }
};
// @lc code=end

