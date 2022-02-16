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
    int ret = 0;

    int helper(TreeNode* root){
        if (!root) return -1;

        int longestLeftBranch = 1 + helper(root->left);
        int longestRightBranch = 1 + helper(root->right);

        ret = max(ret, longestLeftBranch + longestRightBranch);
        return max(longestLeftBranch, longestRightBranch);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return ret;
    }
};
