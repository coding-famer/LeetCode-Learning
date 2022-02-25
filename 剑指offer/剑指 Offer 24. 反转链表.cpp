#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = NULL;
        ListNode* q = head;
        while(q)
        {
            ListNode* k = q->next;
            q->next = p;
            p = q;
            q = k;
        }
        return p;
    }
};