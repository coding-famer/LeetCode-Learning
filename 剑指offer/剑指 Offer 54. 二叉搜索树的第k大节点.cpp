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
    int res=0;
    int kthLargest(TreeNode* root, int k) {
        preorder(root,k);
        return res;
    }
    void preorder(TreeNode* root,int& k)
    {
        if(!root||!k) return;
        preorder(root->right,k);
        k--;
        if(!k) {res=root->val;return;}
        preorder(root->left,k);
    }
};

#include<stack>
class Solution2 {
public:
    int kthLargest(TreeNode* root, int k) {
        stack<TreeNode*> a;
        a.push(root);
        while(!a.empty())
        {
            TreeNode* p=a.top();
            while(a.top()) a.push(a.top()->right);
            a.pop();
            if(!a.empty())
            {
                p=a.top();
                if(--k==0) return p->val;
                a.pop();
                a.push(p->left);
            }
        }
        return 0;
    }
};