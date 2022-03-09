[剑指 Offer 04. 二维数组中的查找](https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/)

## 思路
根据特性，应选择一种遍历方式，能在`O(m+n)`的复杂度下完成搜索。
可以将起点定于二维数组右上角，当该值大于target时，向左搜索，当该值小于target时，向下搜索。
## 代码
```cpp
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0, j = n-1;
        while(i<m&&j>=0)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
```