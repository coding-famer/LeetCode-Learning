[剑指 Offer 10- I. 斐波那契数列](https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/)

## 思路
简单的dp

## 代码
```cpp
class Solution {
public:
    int fib(int n) {
       int a = 0;
       int b = 1;
       if(n==0) return a;
       if(n==1) return b;
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