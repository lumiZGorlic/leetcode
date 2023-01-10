/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q; q.push(root);
        vector<Node*> nds {0, root};
        int x = 1;

        while (x < nds.size()){
            auto n = nds[x];
            if (n->left) nds.push_back(n->left);
            if (n->right) nds.push_back(n->right);
            x++;
        }

        int sz = nds.size();
        x = 1;

        for (int i=1; i<sz; i++){
            if (i == pow(2, x)-1)
                x++;
            else
                nds[i]->next = nds[i+1];
        }

        return root;
    }
};
