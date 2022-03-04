#include<iostream>
#include<vector>
using namespace std;

//--------------------二分查找--------------------------------
int binaryseach(vector<int>& nums, int target)
{
    int l = 0, r = nums.size();
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] == target)
            return m;
        else if (nums[m] > target)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}
//-----------------------------------------------------------

//-------------------------快排-----------------------------
int partition(vector<int>& nums,int l,int h)
{
    int p=nums[l];
    int ll=l;
    while(l<=h)
    {
        while(nums[h]>=p&&l<=h) h--;
        while(nums[l]<=p&&l<=h) l++;
        swap(nums[l],nums[h]);
    }
    swap(nums[ll],nums[l]);
    return l;
}
void sort(vector<int>& nums,int l,int h)
{
    if(l>h) return;
    int p=partition(nums,l,h);
    sort(nums,l,p-1);
    sort(nums,p+1,h);
}
void quicksort(vector<int>& nums)
{
    sort(nums,0,nums.size()-1);
}
//-----------------------------------------------

//------------------归并排序---------------------

void merge(vector<int>& nums,int l,int h)
{
    if(l>=h) return;
    int p=l+(h-l)/2;
    merge(nums,l,p);
    merge(nums,p+1,h);
    vector<int> tmp;
    int
}

void mergesort(vector<int>& nums)
{
    
}