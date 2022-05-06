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
    int ret {0};
    unordered_map<long long, int> sums;

    void help(TreeNode* root, long long curSum, int ts){
        if(!root) return;

        curSum += root->val;
        if(sums.count(curSum - ts)) ret += sums[curSum - ts];

        sums[curSum]++;

        help(root->left, curSum, ts);
        help(root->right, curSum, ts);

        sums[curSum]--;
    }

public:
    int pathSum(TreeNode* root, int targetSum) {
        sums[0] = 1;
        help(root, 0, targetSum);
        return ret;
    }
};
