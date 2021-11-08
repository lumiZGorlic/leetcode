class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int sz = strs.size();
        vector<vector<int>> cnt;

        for (const auto& s: strs){
            int ones = 0, all = s.size();
            for (char c: s) if (c == '1') ones++;
            cnt.push_back( {all-ones, ones} );
        }

        vector<vector<vector<int>>> dp(m+1, vector<vector<int>>(n+1, vector<int>(sz+1, 0)));

        for (int i=0; i<=m; i++){
            for (int j=0; j<=n; j++){
                for (int k=1; k<=sz; k++){
                    dp[i][j][k] = max(dp[i][j][k], dp[i][j][k-1]);

                    int zeroes = i-cnt[k-1][0], ones = j-cnt[k-1][1];

                    if (zeroes < 0 || ones < 0) continue;

                    dp[i][j][k] = max(1 + dp[zeroes][ones][k-1], dp[i][j][k]);
                }
            }
        }

        return dp[m][n][sz];
    }
};
