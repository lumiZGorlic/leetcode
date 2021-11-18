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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        vector<int> ret;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        int curDpth = 0, toAdd = -1;

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            if (cur.second != curDpth) ret.push_back(toAdd);

            curDpth = cur.second;
            toAdd = cur.first->val;

            if (cur.first->left) q.push({cur.first->left, curDpth+1});
            if (cur.first->right) q.push({cur.first->right, curDpth+1});

            if (q.empty()) ret.push_back(toAdd);
        }

        return ret;
    }
};
