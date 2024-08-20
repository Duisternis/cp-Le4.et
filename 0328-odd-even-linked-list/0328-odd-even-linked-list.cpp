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
    ListNode* oddEvenList(ListNode* head) {
        if (head==nullptr || head->next==nullptr || head->next->next==nullptr) return head;

        ListNode *odd=head, *even=head->next, *ev_s=head->next;
        while (odd->next->next && even->next->next) {
            // cout << even->val << " " << endl;
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
        if (even->next != nullptr) {
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=nullptr;
        }
        odd->next=ev_s;
        // cout << odd->val << " " << ev_s->val << endl;
        return head;
    }
};