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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int ln = 0;
        ListNode* tmp = head;
        while(tmp) { tmp = tmp->next; ln++; }

        k %= ln;
        if(!k) return head;

        ListNode *prev=0, *last=0, *ret = 0;
        tmp = head;
        int i=0;

        while(tmp){
            if(i == ln-k-1) {prev = tmp; ret = tmp->next;}
            if(!tmp->next) last = tmp;

            tmp = tmp->next; i++;
        }

        last->next = head;
        prev->next = 0;

        return ret;
    }
};  
