/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copyRandomList(Node* head) {
        if (head == 0) return 0;

        // need to create a deep copy of the original ll
        // original: 1->2->3->NULL
        // copy    : A->B->C->NULL
        // and then intertwine it with the original ll like this:
        // 1->A->2->B->3->C->NULL

        Node *ret = new Node(head->val);
        ret->next = head->next;
        head->next = ret;

        Node *nd = ret->next;
        while (nd)
        {
            Node *tmp = new Node(nd->val);
            tmp->next = nd->next;
            nd->next = tmp;

            nd = tmp->next;
        }

        // set the random pointers
        nd = head;
        while (nd)
        {
            if (nd->random)
                nd->next->random = nd->random->next;
            nd = nd->next->next;
        }

        // disentangle the lists
        nd = head;
        while (nd->next->next)
        {
            Node *n1 = nd, 
                 *n2 = nd->next,
                 *n3 = nd->next->next,
                 *n4 = nd->next->next->next;
            n1->next = n3;
            n2->next = n4;

            nd = n3;
        }
        nd->next = 0;

        return ret;
    }
};
