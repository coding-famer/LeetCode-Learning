#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i=0,j=0,maxl=0;
    int n = s.length();
    vector<bool> a(256,false);
    while(j<n)
    {
        while(a[s[j]]) a[s[i++]]=false;
        maxl=max(maxl,j-i+1);
        a[s[j++]]=true;
    }
    return maxl;
    }
};