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
    // for a given subtree returns a pair - 1) max sum that can be robbed if value at
    // root takes, 2) max value that can be robbed if value at root not taken
    vector<int> helper(TreeNode* root){
        if (!root) return {0,0};

        auto l = helper(root->left);
        auto r = helper(root->right);

        vector<int> v {l[0]+r[0], l[0]+r[1], l[1]+r[0], l[1]+r[1]};

        return {root->val + l[1] + r[1], *max_element(v.begin(), v.end())};
    }

    int rob(TreeNode* root) {
        auto ret = helper(root);
        return max(ret[0], ret[1]);
    }
};
