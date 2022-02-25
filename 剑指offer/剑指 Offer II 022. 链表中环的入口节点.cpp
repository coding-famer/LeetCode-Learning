#include<iostream>
#include<unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* p = head;
        ListNode* q = head;
        while(q)
        {
            p=p->next;
            if(q->next==NULL) return NULL;
            q=q->next->next;
            if(p==q) break;
        }
        if(!q) return NULL;
        ListNode* k = head;
        while(p!=k)
        {
            p=p->next;
            k=k->next;
        }
        return k;
    }
};