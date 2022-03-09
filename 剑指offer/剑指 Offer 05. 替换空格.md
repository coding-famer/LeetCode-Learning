[剑指 Offer 05. 替换空格](https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/)

## 思路
由于替换后字符长度变大，想要在原地进行操作，最好的方法是从后向前遍历。
string的`resize`方法可以修改string的长度。先统计空格个数，再计算出替换后字符串长度，并把字符串resize为这个长度。然后使用两个指针从后往前遍历即可

## 代码
```cpp
class Solution {
public:
    string replaceSpace(string s) {
        int count = 0;
        int l = s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')count++;
        }
        s.resize(l+2*count);
        int n = l+2*count-1;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                s[n--]=s[i];
            }
            else
            {
                s[n--]='0';
                s[n--]='2';
                s[n--]='%';
            }
        }
        return s;
    }
};
```