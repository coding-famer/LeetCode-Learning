/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>> ans;
    vector<int> combine;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(candidates,target,0);
        return ans;
    }
    void dfs(vector<int>& c,int target,int i)
    {
        if(i==c.size()) return;
        if(target==0)
        {
            ans.push_back(combine);
            return;
        }
        dfs(c,target,i+1);
        if(target-c[i]>=0)
        {
            combine.push_back(c[i]);
            dfs(c,target-c[i],i);
            combine.pop_back();
        }
    }
};
// @lc code=end

