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
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        ListNode *n1 = head, *n2 = head;

        while (1){
            if (!n1->next or !n1->next->next) return false;

            n1 = n1->next->next;
            n2 = n2->next;

            if (n2 == n1) return true;
        }

        return false;
    }
};
