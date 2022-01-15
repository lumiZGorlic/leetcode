class Solution {
    int ret {0};
public:
    // dfs that does not need 'set<int> done' or something like that
    // because of 'if' below it's impossible to arrive at a node already visited
    // however to make it more efficient we have the bit 'int i = idx'
    void dfs(const vector<pair<int, int>>& sizeAndMask, int idx, int currMask, int currRet){
        ret = max(ret, currRet);
        int sz = sizeAndMask.size();

        for (int i = idx; i < sz; i++){
            if ((currMask & sizeAndMask[i].second) == 0){
                dfs(sizeAndMask, i+1, (currMask | sizeAndMask[i].second), currRet + sizeAndMask[i].first);
            }
        }
    }

    int maxLength(vector<string>& arrOrig) {
        vector<string> arr;
        for (const auto& s: arrOrig){
            if (set<char>(s.begin(), s.end()).size() == s.size())
                arr.push_back(s);
        }

        int sz = arr.size();
        vector<pair<int, int>> sizeAndMask;

        for (const auto& s: arr){
            int mask = 0;
            for (char c: s) mask |= (1 << (c-'a') );

            sizeAndMask.push_back( {s.size(), mask} );
        }

        for (int i = 0; i < sz; i++){
            dfs(sizeAndMask, i+1, sizeAndMask[i].second, sizeAndMask[i].first);
        }

        return ret;
    }
};
