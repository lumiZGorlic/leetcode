class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int sz = days.size();

        vector<int> dp(sz, 0);
        dp[0] = *min_element(begin(costs), end(costs));

        for (int i=1; i<sz; i++){
            dp[i] = costs[0] + dp[i-1];

            int idx=i;
            while (idx >= 0 && days[idx] > days[i]-7) idx--;

            if (idx >= 0) dp[i] = min(dp[i], dp[idx] + costs[1]);
            else          dp[i] = min(dp[i], costs[1]);

            idx=i;
            while (idx >= 0 && days[idx] > days[i]-30) idx--;

            if (idx >= 0) dp[i] = min(dp[i], dp[idx] + costs[2]);
            else          dp[i] = min(dp[i], costs[2]);
        }

        return dp[sz-1];
    }
};
