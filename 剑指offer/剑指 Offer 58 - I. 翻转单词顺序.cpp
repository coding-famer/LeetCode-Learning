#include<string>
using namespace std;
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