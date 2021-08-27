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
