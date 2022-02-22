#include<string>
using namespace std;
class Solution {
public:
    string replaceSpace(string s) {
        int count = 0;
        int l = s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')count++;
        }
        s.resize(l+2*count);
        int n = l+2*count-1;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                s[n--]=s[i];
            }
            else
            {
                s[n--]='0';
                s[n--]='2';
                s[n--]='%';
            }
        }
        return s;
    }
};