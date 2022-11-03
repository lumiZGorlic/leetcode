class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int limit) {
        int sz = ppl.size();

        sort(ppl.begin(), ppl.end());

        int l = 0, r = sz-1;
        int ret = 0;

        while (l <= r){
            int sm = ppl[r];

            if (l < r && sm + ppl[l] <= limit){
                sm += ppl[l];
                l++;
            }

            r--;
            ret++;
        }

        return ret;
    }
};
