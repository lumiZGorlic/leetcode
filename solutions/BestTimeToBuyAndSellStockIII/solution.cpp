class Solution {
public:
    int maxProfit(vector<int>& p) {
        int sz = p.size();
        int ret=0;

        // max profit we can make up to ith day and with one possible transaction
        vector<int> max_left(sz, 0);
        int minp = p[0];
        for (int i=1; i<sz; i++){
            max_left[i] = max(max_left[i-1], p[i] - minp);
            minp = min(minp, p[i]);
        }

        // max profit we can make after ith day and with one possible transaction
        vector<int> max_right(sz, 0);
        int maxp = p[sz-1];
        for (int i=sz-2; i>=0; i--){
            max_right[i] = max(max_right[i+1], maxp - p[i]);
            maxp = max(maxp, p[i]);
        }

        for (int i=0; i<sz; i++)
            ret = max(ret, max_left[i] + (i < sz-1 ? max_right[i+1] : 0) );

        return ret;
    }
};
