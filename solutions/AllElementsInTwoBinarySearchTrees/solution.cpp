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
    void collect(TreeNode* node, vector<int>& v){
        if(!node) return;
        collect(node->left, v);
        v.push_back(node->val);
        collect(node->right, v);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        collect(root1, v1);
        collect(root2, v2);

        vector<int> ret;
        int i1 = 0, i2 = 0, sz1 = v1.size(), sz2 = v2.size();

        while (i1 < sz1 || i2 < sz2){
            if (i1 < sz1 && i2 < sz2){
                if (v1[i1] < v2[i2]) ret.push_back(v1[i1++]);
                else                 ret.push_back(v2[i2++]);
            }
            else if (i1 < sz1) ret.push_back(v1[i1++]);
            else               ret.push_back(v2[i2++]);
        }

        return ret;
    }
};
