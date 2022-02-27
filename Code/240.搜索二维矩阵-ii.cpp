
/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        int i=m-1;
        int j=0;
        while(i>=0 && j<n)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                i--;
            else
                j++;
        }
        return false;
    }
};
// @lc code=end

