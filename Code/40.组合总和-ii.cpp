/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>> ans;
    vector<int> combine;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        dfs(candidates,0,target);
        return ans;
    }
    void dfs(vector<int>& c,int index,int target)
    {
        if(target==0)
        {
            ans.push_back(combine);
            return;
        }
        for(int i=index;i<c.size();i++)
        {
            if(i>index&&c[i]==c[i-1]) continue;
            combine.push_back(c[i]);
            if(target-c[i]>=0)
                dfs(c,i+1,target-c[i]);
            combine.pop_back();
        }
        }
};
// @lc code=end

