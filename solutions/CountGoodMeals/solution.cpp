class Solution {
public:
    int countPairs(vector<int>& del) {
        int ret = 0;
        int M = 1000000007;

        unordered_map<int, long long> cnt;
        for (int i: del) cnt[i]++;

        unordered_set<int> ps;
        for (int i=0; i<=22; i++) ps.insert(pow(2,i));

        for (auto it: cnt){
            int i = it.first;

            for (int p: ps){
                if (cnt.count(p-i)){
                    if (i > p-i){
                        ret += (cnt[i] * cnt[p-i]) % M;
                    }
                    else if (i == p-i) {
                        ret += ((cnt[i] * (cnt[i]-1)) / 2) % M;
                    }
                }
            }
        }

        return ret;
    }
};
