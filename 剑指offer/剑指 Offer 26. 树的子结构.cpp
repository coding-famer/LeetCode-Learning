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
    bool hassubtree(TreeNode* A,TreeNode* B)
    {
        if(!B) return true;
        if(!A) return false;
        if(A->val==B->val) return hassubtree(A->left,B->left)&&hassubtree(A->right,B->right);
        return false;
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(A==NULL||B==NULL) return false;
        return hassubtree(A,B)||isSubStructure(A->left,B)||isSubStructure(A->right,B);
    }
};