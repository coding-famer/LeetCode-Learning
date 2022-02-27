#include<vector>
using namespace std;
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0) return 0;
        int n = grid[0].size();
        int maxprice=grid[0][0];
        vector<vector<int>> f(m,vector<int>(n));
        f[0][0]=grid[0][0];
        for(int i=1;i<n;i++)
        {
            f[0][i]=grid[0][i]+f[0][i-1];
            maxprice=max(maxprice,f[0][i]);
        }
        for(int i=1;i<m;i++)
        {
            f[i][0]=grid[i][0]+f[i-1][0];
            maxprice=max(maxprice,f[i][0]);
        }
        for(int j=1;j<n;j++)
        {
            for(int i=1;i<m;i++)
            {
                f[i][j]=max(f[i][j-1]+grid[i][j],f[i-1][j]+grid[i][j]);
                maxprice=max(maxprice,f[i][j]);
            }
        }
        return maxprice;
    }
};