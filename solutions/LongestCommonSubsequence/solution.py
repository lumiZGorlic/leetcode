class Solution:
    def longestCommonSubsequence(self, s1: str, s2: str) -> int:
        ln1 , ln2 = len(s1), len(s2)
        dp = [[0 for _ in range(ln2+1)] for _ in range(ln1+1)]

        for i in range(ln1):
            for j in range(ln2):
                if s1[i] == s2[j]:
                    dp[i+1][j+1] = dp[i][j]+1
                else:
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1])

        return dp[ln1][ln2]

'''
class Solution {
public:
    int dp[1000][1000];

    int helper(string& t1, string& t2, int i1, int i2) {
        if (i1 < 0 || i2 < 0) return 0;
        if(dp[i1][i2] != -1) return dp[i1][i2];

        if (t1[i1] == t2[i2])
            return dp[i1][i2] = 1 + helper(t1, t2, i1-1, i2-1);

        return dp[i1][i2] = max(helper(t1, t2, i1, i2-1),
                                helper(t1, t2, i1-1, i2));
    }

    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        return helper(text1, text2, text1.size()-1, text2.size()-1);
    }
};
'''

