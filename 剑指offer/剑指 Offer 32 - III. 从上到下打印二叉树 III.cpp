#include<vector>
#include<queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);
        bool o=0;
        while(!q.empty())
        {
            vector<int> tmp;
            for(int i=q.size();i>0;i--)
            {
                tmp.push_back(q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            if(o)
                reverse(tmp.begin(),tmp.end());
            o = !o;
            res.push_back(tmp);
        }
        return res;
    }
};