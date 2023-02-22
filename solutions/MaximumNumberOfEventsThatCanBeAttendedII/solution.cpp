class Solution {
public:
    int maxValue(vector<vector<int>>& evs, int k) {
        int sz = evs.size(), ret = 0;

        sort(begin(evs), end(evs), [](vector<int>& l, vector<int>& r) { return l[1] < r[1]; });

        vector<vector<int>> dp(k+1, vector<int>(sz, 0)); // dp[i][j] solution for k=i and for j meetings
        vector<int> ends;

        for (int i=0; i<sz; i++)
            ends.push_back(evs[i][1]);

        for (int cur_k=1; cur_k<=k; cur_k++){
            for (int i=0; i<sz; i++){

                int val = evs[i][2], b = evs[i][0];
                dp[cur_k][i] = val;
                if (i) dp[cur_k][i] = max(dp[cur_k][i], dp[cur_k][i-1]);

                auto it = lower_bound(begin(ends), end(ends), b); // (*it) is either b or greater than b
                if (it != begin(ends)){
                    int idx =  (it - begin(ends)) - 1;
                    dp[cur_k][i] = max(dp[cur_k][i], val + dp[cur_k-1][idx]);
                }

                ret = max(ret, dp[cur_k][i]);
            }
        }

        return ret;
    }
};
