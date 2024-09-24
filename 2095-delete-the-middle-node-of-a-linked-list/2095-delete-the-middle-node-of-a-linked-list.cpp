/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next) return NULL;
        ListNode *s=head, *f=head, *p=head, *t;

        while (f->next && f->next->next) {
            p=s;
            s=s->next;
            f=f->next->next;
        }
        
        if (f->next) p=s;
        t=p->next;
        p->next=p->next->next;
        delete t;
        return head;
    }
};