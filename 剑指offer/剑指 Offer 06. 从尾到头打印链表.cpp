#include<vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

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