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
    vector<vector<int>> pathSum(TreeNode* root, int ts) {
        if (!root) return {};
        vector<vector<int>> ret;

        queue<tuple<TreeNode*, int, vector<int>>> q;
        q.push({root, 0, {} });

        while (!q.empty()){
            auto p = q.front(); q.pop();

            auto n = get<0>(p);
            auto s = get<1>(p) + n->val;
            auto v = get<2>(p); v.push_back(n->val);

            if (n->left) q.push({n->left, s, v});
            if (n->right) q.push({n->right, s, v});

            if (!n->left && !n->right && s == ts) ret.push_back(v);
        }

        return ret;
    }
};
