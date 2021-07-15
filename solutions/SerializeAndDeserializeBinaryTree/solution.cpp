/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream os;
        serialize(root, os);
        return os.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream is(data);
        return deserialize(is);
    }
    
    void serialize(TreeNode *root, ostringstream &out) {
        if (!root) {
            out << " #";
            return;
        }
        out << " " + to_string(root->val);
        serialize(root->left, out);
        serialize(root->right, out);
    }

    TreeNode *deserialize(istringstream &in) {
        string str;
        in >> str;
        if (str == "#") {
            return NULL;
        }
        TreeNode *node = new TreeNode(stoi(str));
        node->left = deserialize(in);
        node->right = deserialize(in);
        return node;
    }

};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
