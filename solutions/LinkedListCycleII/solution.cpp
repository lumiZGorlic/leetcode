/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *head1 = head, *head2 = head;

        do {
            if (!head1 || !head1->next) return 0;

            head1 = head1->next->next;
            head2 = head2->next;
        }
        while (head1 != head2);

        ListNode* head3 = head;

        while (head2 != head3) {
            head2 = head2->next;
            head3 = head3->next;
        }

        return head2;
    }
};
