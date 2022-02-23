# 剑指 Offer 15. 二进制中1的个数

[剑指 Offer 15. 二进制中1的个数](https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof)

## 思路
题目显然需要通过位运算完成

## 法一：
巧用`n&(n-1)`，每次`n&(n-1)`操作都能提取一个数中的1
```cpp
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            count++;
            n&=(n-1);
        } 
        return count;
    }
};
```
## 法二
将该数不断右移，然后记录第一位为1的次数
```cpp
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            count+=n&1;
            n>>=1;
        } 
        return count;
    }
};
```