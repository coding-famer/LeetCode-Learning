/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement1(vector<int>& nums) {
        int a;
        
        a=rand()%nums.size();
        return nums[a];
    }
    int majorityElement(vector<int> &nums){
        int t1=0,t=0;
        srand(time(NULL));
        while(t<=nums.size()/2){
            t1=majorityElement1(nums);
            t=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==t1){
                    t++;
                }
            }
        }
        return t1;
    }
};
// @lc code=end

