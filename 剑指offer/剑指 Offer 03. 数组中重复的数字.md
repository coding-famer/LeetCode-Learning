[剑指 Offer 03. 数组中重复的数字](https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof)

## 解法一
由于是要寻找重复数字，首先想到的就是使用哈希表，这种方法只需要遍历数组，若存在冲突则含有相同元素
代码：
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