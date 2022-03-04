[剑指 Offer 03. 数组中重复的数字](https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof)

## 思路
要求找出任意重复数字，可以用哈希表。但这题有更进一步的条件，即数的范围都在0到n-1内，有个经典的方法就是把原数组看成哈希表，把每个数x移动到下标为x的位置，如果有两个数被移动到同一位置即为重复数字。
## 解法一
由于是要寻找重复数字，首先想到的就是使用哈希表，这种方法只需要遍历数组，若存在冲突则含有相同元素
**代码：**
```cpp
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,bool> a;
        for(int num:nums)
        {
            if(a[num]) return num;
            a[num]=true;
        }
        return 0;
    }
};
```
## 解法二
将每个数x移动到下标为x的位置，如果有两个数被移动到同一位置即为重复数字

**代码：**
```cpp
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i = 0;
        while(nums[i]==i)i++;
        for(;i<nums.size();i++)
        {
            if(nums[i]==i)continue;
            if(nums[i]==nums[nums[i]]) return nums[i];
            swap(nums[i],nums[nums[i]]);
            i--;
        }
        return -1;
    }
};
```