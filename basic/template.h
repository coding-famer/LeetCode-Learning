#include<iostream>
#include<vector>
using namespace std;
//-------------------链表--------------------------
struct ListNode
{
    ListNode* next;
    int val;
    ListNode(int v):val(v),next(NULL){}
};
//--------------------二叉树---------------------------
struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int v):val(v),left(NULL),right(NULL){}
};
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

void merge(vector<int>& nums,vector<int>& tmp,int l,int h)
{
    if(l>=h) return;
    int p=l+(h-l)/2;
    merge(nums,tmp,l,p);
    merge(nums,tmp,p+1,h);
    int k=l,i=l,j=p+1;
    while(i<=p&&j<=h)
        tmp[k++]=(nums[i]<nums[j]?nums[i++]:nums[j++]);
    while(i<=p)
        tmp[k++]=nums[i++];
    while(j<=h)
        tmp[k++]=nums[j++];
    for(int x=l;x<=h;x++)
        nums[x]=tmp[x];
}

void mergesort(vector<int>& nums)
{
    vector<int> tmp(nums.size());
    merge(nums,tmp,0,nums.size()-1);
}
//----------------------反转链表------------------
ListNode* reverseList(ListNode* head) {
    ListNode* p=NULL;
    ListNode* q=head;
    while(q)
    {
        ListNode* k=q->next;
        q->next=p;
        p=q;q=k;
    }
    return p;
}