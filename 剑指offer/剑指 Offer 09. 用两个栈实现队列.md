[剑指 Offer 09. 用两个栈实现队列](https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/)

## 思路
这题其实并不难，栈的特性是先进后出，队列的特性是先进先出
![](https://gitee.com/seugch/image-bed/raw/master/img/b813bda09374058f18449b18cc6536a5b8670d5a7b65867eb65b32066c79c1ae-Picture0.png)
第一个栈用来入队，第二个栈用来出队
但有元素入队时，将它压入第一个栈。当有元素出队时，第二个栈弹出元素，当第二个栈为空时，将第一个栈逐个弹出元素压入第二个栈中。
即将部分元素倒序放在第二个栈中
## 代码
```cpp
class CQueue {
    stack<int> s1,s2;
    int size;
public:
    CQueue() {
        while(!s1.empty())
            s1.pop();
        while(!s2.empty())
            s2.pop();
        size = 0;
    }
    
    void appendTail(int value) {
        s1.push(value);
        size++;
    }
    
    int deleteHead() {
        if(size == 0)
            return -1;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int ret = s2.top();
        s2.pop();
        size--;
        return ret;

    }
};
```

