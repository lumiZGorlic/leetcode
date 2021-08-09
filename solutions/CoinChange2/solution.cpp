class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int sz=coins.size();
        vector<vector<int>> dp(amount+1, vector<int>(sz, 0));

        for (int i=0; i<sz; i++) dp[0][i] = 1;

        for (int i=1; i<=amount; i++){
            for (int j=0; j<sz; j++){
                if (j) dp[i][j] = dp[i][j-1];
                if (i - coins[j] >= 0) dp[i][j] += dp[i - coins[j]][j];
            }
        }

        return dp[amount][sz-1];
    }
};
