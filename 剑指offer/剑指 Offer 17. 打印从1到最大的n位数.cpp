#include<vector>
using namespace std;
class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        int x=0;
        while(n>0)
        {
            x*=10;
            x+=9;
            n--;
        }
        for(int i=0;i<x;i++)
            res.push_back(i+1);
        return res;
    }
};