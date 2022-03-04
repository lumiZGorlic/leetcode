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
    vector<TreeNode*> f(TreeNode* root){
        if (!root) return {0,0};
        auto l = f(root->left);
        auto r = f(root->right);

        root->left = root->right = 0;

        if (l[0] != 0) {
            root->right = l[0];
            if (r[0] != 0){
                l[1]->right = r[0];
                return {root, r[1]};
            }
            else {
                return {root, l[1]};
            }
        }
        else if (r[0] != 0){
            root->right = r[0];
            return {root, r[1]};
        }

        return {root, root};
    }

    void flatten(TreeNode* root) {
        f(root);
    }
};
