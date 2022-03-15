[剑指 Offer 16. 数值的整数次方](https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof/)

## 思路
这就是快速幂算法,通过递归来减少重复的计算
当计算x的n次时,若n为偶数，则计算 $x*x$ 的$n/2$次，若n为奇数，则计算 $x*x$ 的$(n-1)/2$次，然后再乘以$x$

## 代码
```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==-1) return 1/x;
        if(n&1) return myPow(x*x,n>>1)*x;
        else return myPow(x*x,n>>1);
    }
};
```