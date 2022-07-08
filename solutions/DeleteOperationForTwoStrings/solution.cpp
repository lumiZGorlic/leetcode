class Solution {
public:
    int minDistance(string w1, string w2) {
        int sz1 = w1.size(), sz2 = w2.size();

        vector<vector<int>> dp(sz1+1, vector<int>(sz2+1, 0));

        for (int i=1; i<=sz1; i++) dp[i][0] = i;
        for (int i=1; i<=sz2; i++) dp[0][i] = i;

        for (int i=0; i<sz1; i++){
            for(int j=0; j<sz2; j++){
                if(w1[i] == w2[j]){
                    dp[i+1][j+1] = dp[i][j];
                }
                else {
                    dp[i+1][j+1] = min(dp[i+1][j], dp[i][j+1]) + 1;
                }
            }
        }

        return dp[sz1][sz2];
    }
};
