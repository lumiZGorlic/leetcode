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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret = 0, *cur = 0;
        int rest=0;
        
        while(l1 || l2 || rest){
            int val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + rest;
            rest = val / 10;
            
            ListNode* n = new ListNode(val % 10);
            if (cur) cur->next = n;
            cur = n;
            
            if (!ret) ret = cur;
            
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return ret;
    }
};
