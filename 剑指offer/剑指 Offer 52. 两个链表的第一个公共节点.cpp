#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode* p = headA;
       ListNode* q = headB;
       if(!p||!q) return NULL;
       while(p!=q)
       {
           if(p==NULL) p=headB;
           else p=p->next;
           if(q==NULL) q=headA;
           else q=q->next;
       }
       return p;
    }
};