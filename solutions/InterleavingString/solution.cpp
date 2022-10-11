class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int sz1 = s1.size(), sz2 = s2.size(), sz3 = s3.size();
        if(sz1 + sz2 != sz3) return false;

        vector<vector<int>> dp(sz1+1, vector<int>(sz2+1, 0));
        dp[0][0] = 1;

        for (int i = 0; i <= sz1; i++){
            for (int j = 0; j <= sz2; j++){
                if(i==0 && j==0) continue;
                if (i && s1[i-1] == s3[i+j -1] && dp[i-1][j]) dp[i][j] = 1;
                if (j && s2[j-1] == s3[i+j -1] && dp[i][j-1]) dp[i][j] = 1;
            }
        }

        return dp[sz1][sz2];
    }
};

