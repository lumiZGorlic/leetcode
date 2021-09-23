class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int sz=s.size();

        vector<vector<int>> dp(sz, vector<int>(sz, 1));
        int ret=1;

        for (int i=1; i<sz; i++){
            for (int l=0; l<sz; l++){
                int r = l + i;
                if (r >= sz) continue;

                dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
                dp[l][r] = max(dp[l][r], dp[l+1][r-1]);

                if (s[l] == s[r]) dp[l][r] = max(dp[l][r], (l+1 < r ? dp[l+1][r-1] : 0) + 2);

                ret = max(ret, dp[l][r]);
            }
        }

        return ret;
    }
};
