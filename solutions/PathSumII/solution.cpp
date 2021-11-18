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
    vector<vector<int>> ret;
public:
    void dfs(TreeNode* root, vector<int>& cur, int curSum){
        curSum -= root->val;
        cur.push_back(root->val);

        if (!root->left && !root->right){
            if (!curSum) ret.push_back(cur);
            cur.pop_back();
            return;
        }

        if (root->left) dfs(root->left, cur, curSum);
        if (root->right) dfs(root->right, cur, curSum);

        curSum += root->val;
        cur.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (!root) return {};
        vector<int> cur;
        dfs(root, cur, targetSum);
        return ret;
    }
};
