/*
 * @lc app=leetcode.cn id=384 lang=cpp
 *
 * [384] 打乱数组
 */

// @lc code=start
class Solution {
    vector<int> a;
    vector<int> b;
    int k=1;
public:
    Solution(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            a.push_back(nums[i]);
            b.push_back(nums[i]);
        }
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return a;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int n = a.size();   
        srand(k);
        for (int i = 0; i<n; i++) {
           
            int p = rand() % n;
            swap(b[i], b[p]);
        }
        k++;
        return b;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

