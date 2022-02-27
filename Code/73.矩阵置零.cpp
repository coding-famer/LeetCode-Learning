/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        while(!row.empty())
        {
            int temp = row.back();
            row.pop_back();
            for(int j=0;j<n;j++)
            {
                matrix[temp][j]=0;
            }
        }
        while(!col.empty())
        {
            int temp = col.back();
            col.pop_back();
            for(int i=0;i<m;i++)
            {
                matrix[i][temp]=0;
            }
        }
    }
};
// @lc code=end

