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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int sz=0;
        ListNode* ln=head;
        while (ln) { sz++; ln=ln->next; }

        // put nodes in vector in the right order
        vector<ListNode*> nodesInOrder(sz+1, 0);

        int n = sz/k;

        // take care of groups
        for (int i = 1; i <= n; i++){
            int idx = i*k - 1;
            for (int j = 0; j < k; j++){
                nodesInOrder[idx--] = head; head = head->next;
            }
        }

        // nodes at the end that don't form group
        int idx = n*k;
        while (head){
            nodesInOrder[idx++] = head; head = head->next;
        }

        for (int i=0; i<sz; i++)
            nodesInOrder[i]->next = nodesInOrder[i+1];

        return nodesInOrder[0];
    }
/*
    //[first,last]
    ListNode* reverse(ListNode* first, ListNode* last)
    {
        ListNode* prev = nullptr;
        ListNode* end_next = last->next;
        while ( first != end_next )
        {
            auto tmp = first->next;
            first->next = prev;
            prev = first;
            first = tmp;
        }
        return last;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        auto node=head;
        for (int i=0; i < k - 1 && node; ++i)
        {
            node = node->next;
        }
        if(!node) return head;
        
        auto new_begin = node->next;
        auto new_head = reverse(head, node);
        head->next = reverseKGroup( new_begin, k);
        return new_head;
    }
*/
};
