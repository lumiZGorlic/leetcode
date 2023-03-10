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
    unordered_map<TreeNode*, pair<TreeNode*, TreeNode*>> par2Ch; // parent to Children
    vector<vector<TreeNode*>> nPerLevel; // nodes per level

    void dfs(TreeNode* n, int d){
        if(!n) return;
        if(nPerLevel.size() <= d) nPerLevel.push_back( {} );
        nPerLevel[d].push_back(n);
        par2Ch[n] = { n->left, n->right };
        dfs(n->left,  d+1);
        dfs(n->right, d+1);
    }

    int countPairs(TreeNode* root, int dist) {
        dfs(root, 0);
        int ret = 0, sz = nPerLevel.size();

        unordered_map<TreeNode*, vector<int>> cur; // current level

        for (int i = sz-1; i >= 0; i--){
            unordered_map<TreeNode*, vector<int>> newcur;

            for (auto n: nPerLevel[i]){
                auto leftCh = par2Ch[n].first;
                auto rightCh = par2Ch[n].second;
                vector<int> distL, distR; // dists travelled by leaves that reached left and right child
                if(leftCh && cur.count(leftCh))   distL = cur[leftCh];
                if(rightCh && cur.count(rightCh)) distR = cur[rightCh];

                newcur[n] = {};

                if(!distL.size() && !distR.size()){
                    newcur[n].push_back(0);
                } else {
                    for (auto i: distL) for (auto j: distR) if(i+j+2 <= dist) ret++;
                    transform(begin(distL), end(distL), back_inserter(newcur[n]), [](int i){ return i+1; });
                    transform(begin(distR), end(distR), back_inserter(newcur[n]), [](int i){ return i+1; });
                }
            }

            cur.swap(newcur);
        }

        return ret;
    }
};
