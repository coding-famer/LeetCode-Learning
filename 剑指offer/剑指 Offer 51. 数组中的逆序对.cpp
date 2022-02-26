#include<vector>
using namespace std;
class Solution {
public:
    int merge(vector<int>& nums,vector<int> tmp,int l,int r)
    {
        if(r<=l) return 0;
        int mid = (l+r)/2; 
        int res = merge(nums,tmp,l,mid)+merge(nums,tmp,mid+1,r);
        int i = l,j = mid+1;
        for(int k=l;k<=r;k++) tmp[k]=nums[k];
        for(int k=l;k<=r;k++)
        {
            if(i==mid+1) nums[k]=tmp[j++];
            else if(j==r+1||tmp[i]<=tmp[j]) nums[k]=tmp[i++];
            else
            {
                nums[k]=tmp[j++];
                res+=mid-i+1;
            }
        }
        return res;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        vector<int> tmp(n);
        return merge(nums,tmp,0,n-1);
    }
};