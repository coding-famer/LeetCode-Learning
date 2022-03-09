[剑指 Offer 11. 旋转数组的最小数字](https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/)

## 思路
最简单的可以顺序扫描，时间复杂度为`O(n)`
改进的思路：可以使用类似二分查找的方法

## 代码
```cpp
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int l = 0;
        int r = numbers.size()-1;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(numbers[r]<numbers[m])  l=m+1;
            else if(numbers[r]==numbers[m])  r--;
            else r=m;
        }
        return numbers[l];
    }
};
```