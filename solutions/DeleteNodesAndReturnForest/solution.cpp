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
    vector<TreeNode*> ret;
    unordered_set<int> toDelSet;
public:
    void dfs(TreeNode* root){
        if(!root) return;

        if (toDelSet.count(root->val)){
            auto maybeAddToRet = [&] (TreeNode* node) { if (node && !toDelSet.count(node->val)) ret.push_back(node); };
            maybeAddToRet(root->left);
            maybeAddToRet(root->right);
        }

        auto doRecursionAndMaybeCutOff = [&] (TreeNode** node) { dfs(*node); if (*node && toDelSet.count((*node)->val)) *node = 0;};
        doRecursionAndMaybeCutOff(&root->left);
        doRecursionAndMaybeCutOff(&root->right);
    }

    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& toDelVect) {
        for(auto i: toDelVect) toDelSet.insert(i);
        if(!toDelSet.count(root->val)) ret.push_back(root);
        dfs(root);
        return ret;
    }
};

