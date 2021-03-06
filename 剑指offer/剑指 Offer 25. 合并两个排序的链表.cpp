#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode* p = res;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                p->next=l1;
                p=l1;
                l1=l1->next;
            }
            else
            {
                p->next=l2;
                p=l2;
                l2=l2->next;
            }
        }
        if(!l1) p->next=l2;
        if(!l2) p->next=l1;
        return res->next;
    }
};