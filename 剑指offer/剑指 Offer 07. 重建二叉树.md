[剑指 Offer 07. 重建二叉树](https://leetcode-cn.com/problems/zhong-jian-er-cha-shu-lcof/)


## 思路
前序遍历性质： 节点按照 [ 根节点 | 左子树 | 右子树 ] 排序。
中序遍历性质： 节点按照 [ 左子树 | 根节点 | 右子树 ] 排序。
对于每一棵给定根节点树，都可以利用这两个特性区分出它的左右子树

![](https://gitee.com/seugch/image-bed/raw/master/img/1629825510-roByLr-Picture1.png)
为了能更快地得到一个节点在中序遍历中的位置，我们把节点值作为key，节点在中序遍历中的位置作为value放入一个map中

`TreeNode* recur(int root,int left,int right)`

root为该子树的根，left，right为该子树在中序遍历中的位置
返回值为该子树根节点

## 代码
```cpp
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        this->preorder = preorder;
        for(int i=0;i<inorder.size();i++)
           dic[inorder[i]] = i; 
        return recur(0,0,inorder.size()-1);
    }
private:
    vector<int> preorder;
    unordered_map<int,int> dic;
    TreeNode* recur(int root,int left,int right) 
    {
        if(left>right) return nullptr;
        TreeNode* node = new TreeNode(preorder[root]);
        int i = dic[preorder[root]];
        node->left = recur(root+1,left,i-1);
        node->right = recur(root+i-left+1,i+1,right);
        return node;
    }
};
```