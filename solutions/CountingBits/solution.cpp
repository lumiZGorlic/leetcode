class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret{0};
        if (!n) return ret;

        int idx_max = 1, idx = 0;

        while (ret.size() <= n){
            if (idx == idx_max)
            {
                idx_max = ret.size();
                idx = 0;
            }
            else
            {
                ret.push_back(ret[idx]+1);
                idx++;
            }
        }

        return ret;
    }
};
