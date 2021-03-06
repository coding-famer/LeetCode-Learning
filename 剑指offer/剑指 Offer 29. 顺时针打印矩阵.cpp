#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int r2 = matrix.size()-1;
        if(r2==-1)
            return ret;
        int c2 = matrix[0].size()-1;
        int r1 = 0, c1 = 0;
        while(r1<=r2&&c1<=c2)
        {
            for(int i=c1;i<=c2;i++)
                ret.push_back(matrix[r1][i]);
            for(int i=r1+1;i<=r2;i++)
                ret.push_back(matrix[i][c2]);
            if(r1!=r2)
            {
                for(int i=c2-1;i>=c1;i--)
                    ret.push_back(matrix[r2][i]);
            }
           if(c1!=c2)
           {
               for(int i=r2-1;i>r1;i--)
                ret.push_back(matrix[i][c1]);
           } 
           r1++;c1++;r2--;c2--;
        }
        return ret;
    }
};