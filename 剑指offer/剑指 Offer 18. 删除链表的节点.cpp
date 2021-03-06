#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *deleteNode(ListNode *head, int val)
    {
        if (head->val == val)
            return head->next;
        ListNode *p = head;
        while (p->next)
        {
            if (p->next->val == val)
            {
                p->next = p->next->next;
                break;
            }
            p = p->next;
        }
        return head;
    }
};