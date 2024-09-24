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
        if (!head->next) {
            return NULL;
        }
        ListNode *s=head, *f=head, *t, *p=head;

        while (f->next && f->next->next) {
            p=s;
            s=s->next;
            f=f->next->next;
            cout << f->val << endl;
        }
        if (f->next) {
            t=s->next;
            s->next=s->next->next;
            delete t;
        } else {
            t=p->next;
            p->next=p->next->next;
            delete t;
        }
        cout << p->val << endl;
        return head;
    }
};