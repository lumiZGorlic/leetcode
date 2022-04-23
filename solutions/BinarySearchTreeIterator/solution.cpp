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
class BSTIterator {
    vector<TreeNode*> st;
public:
    BSTIterator(TreeNode* root) {
        if(!root) return;

        while (root) {
            st.push_back(root);
            root = root->left;
        }
    }

    int next() {
        auto ret = st.back(); st.pop_back();

        if (ret->right){
            st.push_back(ret->right);
            auto tmp = ret->right->left;
            while(tmp){
                st.push_back(tmp);
                tmp = tmp->left;
            }
        }

        return ret->val;
    }

    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
