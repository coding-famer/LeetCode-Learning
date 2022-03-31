#include"template.h"
#include<iostream>
#include<vector>

void test_mergesort()
{
    vector<int> nums={13,5,2,7,4,9,6,1};
    mergesort(nums);
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
}
void test_binarysearch()
{
    vector<int> nums={1,3,5,6};
    int target=7;
    int ans = binaryseach(nums,target);
    cout<<ans;
}

int main()
{
    test_binarysearch();
}