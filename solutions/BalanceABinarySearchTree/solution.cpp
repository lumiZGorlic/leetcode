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
    vector<int> sortedNums;
public:
    void inOrderTrav(TreeNode* root){
        if (!root) return;
        inOrderTrav(root->left);
        sortedNums.push_back(root->val);
        inOrderTrav(root->right);
    }

    TreeNode* helper(int l, int r){
        if (l > r) return 0;

        int idx = l + (r-l)/2;
        TreeNode* ret = new TreeNode(sortedNums[idx]);

        ret->left = helper(l, idx-1);
        ret->right = helper(idx+1, r);
        return ret;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inOrderTrav(root);
        return helper(0, sortedNums.size()-1);
    }
};
