/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int sz = in.size();
        if(!sz) return 0;

        int val = pre[0];

        TreeNode* node = new TreeNode(val);

        auto it = find(in.begin(), in.end(), val);

        pre.erase(pre.begin());

        vector<int> inl(in.begin(), it);
        vector<int> inr(it+1, in.end());

        node->left = buildTree(pre, inl);
        node->right = buildTree(pre, inr);

        return node;
    }
};

