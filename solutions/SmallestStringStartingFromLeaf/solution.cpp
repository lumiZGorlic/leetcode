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
    string ret;
public:
    
    void dfs(TreeNode* root, string& s){
        s += char(97 + root->val);

        if (!root->left && !root->right){
            string copy(s);
            std::reverse(copy.begin(), copy.end());
            if (!ret.size() || ret.compare(copy) > 0) ret = copy;
        }
        else {
            if (root->left) dfs(root->left, s);
            if (root->right) dfs(root->right, s);
        }
        s.pop_back();
    }

    string smallestFromLeaf(TreeNode* root) {
        string s;
        dfs(root, s);
        return ret;
    }
};
