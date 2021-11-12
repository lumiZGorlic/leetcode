/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    // values are unique so hash map can be used
    unordered_map<int, Node*> mp;
public:
    Node* cloneGraph(Node* node) {
        if (!node) return 0;

        int val = node->val;
        Node* root = new Node(val);
        mp[val] = root;

        for (auto nb: node->neighbors){
             if (mp.count(nb->val))
                 root->neighbors.push_back(mp[nb->val]);
             else
                 root->neighbors.push_back( cloneGraph(nb) );
        }

        return root;
    }
};
