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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *n1 = head, *n2 = head->next, *prv = 0;
        head = n2;

        while (1)
        {
            ListNode *tmp = n2->next;

            if(prv) prv->next = n2;
            n2->next = n1;
            prv = n1;

            n1 = tmp;
            if(!n1) { prv->next = 0; break; }
            n2 = n1->next;
            if (!n2) { prv->next = n1; n1->next = 0; break; }
        }

        return head;
    }
};
