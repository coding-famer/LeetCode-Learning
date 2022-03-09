[剑指 Offer 32 - II. 从上到下打印二叉树 II](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/)

## 思路
是一个层次遍历的问题，但是输出需要包含层次信息，所以关键在于如何记录每一层的节点个数
`for(int i=q.size();i>0;i--)`这个循环从大到小，完美解决了这个问题。因为如果是从小到大循环，`q.size()`的值会随着节点被移出或移入队列而改变。

## 代码
```cpp
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);
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
            res.push_back(tmp);
        }
        return res;
    }
};
```