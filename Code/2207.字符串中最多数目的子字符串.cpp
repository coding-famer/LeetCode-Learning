/*
 * @lc app=leetcode.cn id=2207 lang=cpp
 *
 * [2207] 字符串中最多数目的子字符串
 */

// @lc code=start
class Solution {
public:
    long long maximumSubsequenceCount(string s, string pattern) {
        int n=s.length();
        long long m=0;
        vector<long long> former(n);
        long long f=0;
        long long l=0;
        long long h=0;
        former[0]=0;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]==pattern[0]) {former[i]=former[i-1]+1;}
            else former[i]=former[i-1];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==pattern[1])
            {h+=former[i];l++;}
            if(s[i]==pattern[0])f++;
        }
        return h+max(f,l);
    }
};
// @lc code=end

