#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char,int> a;
        for(char c:s)
            a[c]++;
        for(char c:s)
        {
            if(a[c]==1)
                return c;
        }
        return ' ';
    }
};