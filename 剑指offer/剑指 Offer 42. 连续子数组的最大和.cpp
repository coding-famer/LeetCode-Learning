#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int x=0,maxx=nums[0];
        for(auto n:nums)
        {
            x=max(x+n,n);
            maxx=max(maxx,x);
        }
        return maxx;
    }
};