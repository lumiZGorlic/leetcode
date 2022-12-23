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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0, sz = preorder.size();

        std::function<TreeNode*(int, int)> f;

        f = [&] (int min, int max) -> TreeNode* {
            if (idx >= sz) return 0;
            int v = preorder[idx];

            if ( min < v && v < max){
                TreeNode* n = new TreeNode(v);
                idx++;
                n->left =  f(min, v);
                n->right = f(v, max);
                return n;
            }

            return 0;
        };

        return f(-1001, 1001);
    }
};

/*
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder, int max_val = INT_MAX) {
        if (i == preorder.size() || preorder[i] > max_val) return NULL;
        
        TreeNode* root = new TreeNode(preorder[i++]);
        
        root->left = bstFromPreorder(preorder, root->val);
        root->right = bstFromPreorder(preorder, max_val);
        
        return root;
    }
    
private:
    int i = 0;
};
*/
