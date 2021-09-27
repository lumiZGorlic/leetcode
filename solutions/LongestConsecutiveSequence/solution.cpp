struct Node { Node *prev, *nxt; int val; };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ret = 0;
        unordered_map<int, Node*> mp;

        for (auto n: nums){
            if (!mp.count(n)){
                Node* root = new Node{0, 0, n};
                mp[n] = root;

                if (mp.count(n-1)){
                    mp[n-1]->nxt = root;
                    root->prev = mp[n-1];
                }
                if (mp.count(n+1)){
                    mp[n+1]->prev = root;
                    root->nxt = mp[n+1];
                }
            }
        }

        for (auto it: mp){
            Node* root = it.second;
            if (!root->prev) {
                int cnt = 0;
                while (root) { root = root->nxt; cnt++;}
                ret = max(ret, cnt);
            }
        }

        return ret;
    }
};
