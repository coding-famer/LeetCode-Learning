#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        return abs(depth(root->left)-depth(root->right))<2&&isBalanced(root->left)&&isBalanced(root->right);
    }
    int depth(TreeNode* root)
    {
        if(root==NULL) return 0;
        else return max(depth(root->left),depth(root->right))+1;
    }
};