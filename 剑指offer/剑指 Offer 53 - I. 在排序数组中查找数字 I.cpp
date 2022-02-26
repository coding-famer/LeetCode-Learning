#include<vector>
using namespace std;
class Solution {
public:
    int binarysearch(vector<int>& nums,int target)
    {
        int i=0,j=nums.size();
        while(i<j)
        {
            int p = i+(j-i)/2;
            if(nums[p]>=target) j=p;
            else i=p+1;
        }
        return i;
    }
    int search(vector<int>& nums, int target) {
        int first = binarysearch(nums,target);
        int last = binarysearch(nums,target+1);
        return (first==nums.size()||nums[first]!=target)?0:last-first;
    }
};