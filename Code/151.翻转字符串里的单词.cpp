// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem151.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
       int n = s.length();
        string ret;
        int i=n-1,j=n-1;
        int k=0;
        while(s[k]==' ') k++;
        while(i>=k)
        {
            while(s[i]==' ')
            {
                i--;
                j=i;
            }
            while(i!=k-1&&s[i]!=' ')
                i--;
            ret+=s.substr(i+1,j-i);
            ret+=' ';
        }
        return ret.substr(0,ret.length()-1);
    }
};
// @lc code=end

