// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem108.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bst(nums,0,nums.size()-1);
    }
    TreeNode* bst(vector<int>& n ,int left, int right)
    {
        if(left>right)
            return nullptr;
        int mid=left+(right-left)/2;
        TreeNode* root = new TreeNode(n[mid]);
        root->left=bst(n,left,mid-1);
        root->right=bst(n,mid+1,right);
        return root;
    }
};
// @lc code=end

