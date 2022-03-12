[剑指 Offer 14- I. 剪绳子](https://leetcode-cn.com/problems/jian-sheng-zi-lcof/)

## 思路
运用了贪心思想
由“算术几何均值不等式”，将绳子以相等的长度分为多段，乘积最大
$$
\frac{n_{1}+n_{2}+\ldots+n_{a}}{a} \geq \sqrt[a]{n_{1} n_{2 \ldots n}}
$$
分析后可得出，当将绳子分为多段3和一段2或4时，所得乘积最大

## 代码
```cpp
class Solution {
public:
    int cuttingRope(int n) {
        if(n<=3) return n-1;
        int count = 0;
        int ans=1;
        while(n>3)
        {
            count++;
            n-=3;
        }
        for(int i=0;i<count;i++) ans*=3;
        if(n==0) return ans;
        else if(n==1) return ans/3*4;
        else return ans*n; 
    }
};
```
