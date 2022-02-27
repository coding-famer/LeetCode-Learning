#include<vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int p=1;
        for(int i=0;i<n;i++)
            x^=nums[i];
        while(!(p&x))
            p<<=1;
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&p) a^=nums[i];
            else b^=nums[i];
        }
        return vector<int> {a,b};
    }
};