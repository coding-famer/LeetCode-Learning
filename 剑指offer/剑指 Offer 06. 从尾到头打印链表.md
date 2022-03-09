[剑指 Offer 06. 从尾到头打印链表](https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/)

## 思路
反转 输出
栈

## 代码
```cpp
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        ListNode* p=NULL;
        ListNode* q=head;
        int count = 0;
        while(q!=NULL)
        {
            ListNode* k = q->next;
            q->next=p;
            p=q;
            q=k;
            count++;
        }
        vector<int> ret(count);
        int i=0;
        while(p!=NULL)
        {
            ret[i]=p->val;
            i++;
            p=p->next;
        }
        return ret;
    }
};
```