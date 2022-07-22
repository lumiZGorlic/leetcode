class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& d) {
        int n=d.size(), m=d[0].size();
        // dp[i][j] min value you need to arrive at (i,j) to continue to finish
        vector<vector<int>> dp(n, vector<int>(m, 0));

        for (int i = n-1; i >= 0; i--){
            for (int j = m-1; j >= 0; j--){
                if (i == n-1 && j == m-1) {
                    dp[i][j] = d[i][j] >= 0 ? 1 : -d[i][j]+1;
                }
                else if(i == n-1){
                    int v = -dp[i][j+1] + d[i][j];
                    dp[i][j] = v >= 0 ? 1 : -v;
                }
                else if (j == m-1){
                    int v = -dp[i+1][j] + d[i][j];
                    dp[i][j] = v >= 0 ? 1 : -v;
                }
                else {
                    int v = -min(dp[i+1][j], dp[i][j+1]) + d[i][j];
                    dp[i][j] = v >= 0 ? 1 : -v;
                }
            }
        }

        return dp[0][0];
    }
};

// test shows why need to have '>='
// [-10, 6],
// [-30,-5]
