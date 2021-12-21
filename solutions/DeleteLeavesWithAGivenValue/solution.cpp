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
    bool dfs(TreeNode* node, int target){
        if (!node->left && !node->right){
            if(node->val == target)
                return true;
            return false;
        }

        bool cutOffLeft = node->left ? dfs(node->left, target) : true;
        bool cutOffRight = node->right ? dfs(node->right, target) : true;
        if(cutOffLeft) node->left = 0;
        if(cutOffRight) node->right = 0;

        return cutOffLeft && cutOffRight && node->val == target;
    }

    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return dfs(root, target) ? 0 : root;
    }
};

