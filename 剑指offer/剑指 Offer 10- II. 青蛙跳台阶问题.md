[剑指 Offer 10- II. 青蛙跳台阶问题](https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/)

## 思路
简单的dp。。。

## 代码
```cpp
class Solution {
public:
    int numWays(int n) {
        int a = 1;
        int b = 1;
       for(;n>1;n--)
       {
           int k = (a+b)%1000000007;
           a = b;
           b = k;
       }
       return b;
    }
};
```