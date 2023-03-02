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
    vector<int> postorderTraversal(TreeNode* root) {
        // 1. my solution

        if(!root) return {};
        vector<TreeNode*> vtn {root};
        unordered_map<TreeNode*, int> mp; mp[root] = 0;
        vector<int> ret;

        while(!vtn.empty()){
            auto cur = vtn.back();
            if (mp[cur] == 2){   // both left and right children done 
                ret.push_back(cur->val);
                vtn.pop_back();
            }
            else if (mp[cur] == 1){ // left child done, now let's do the right one
                if(cur->right) vtn.push_back(cur->right);
                mp[cur->right] = 0;
                mp[cur]++;
            }
            else if (mp[cur] == 0){  // none of the children done,let's start with the left one
                if(cur->left) vtn.push_back(cur->left);
                mp[cur->left] = 0;
                mp[cur]++;
            }
        }

        return ret;

        // 2. shorter solution

        /*vector<int> nodes;
        stack<TreeNode*> todo;
        TreeNode* last = NULL;
        while (root || !todo.empty()) {
            if (root) {
                todo.push(root);
                root = root -> left;
            } else {
                TreeNode* node = todo.top();
                if (node -> right && last != node -> right) {
                    root = node -> right;
                } else {
                    nodes.push_back(node -> val);
                    last = node;
                    todo.pop();
                }
            }
        }
        return nodes;*/
    }
};
