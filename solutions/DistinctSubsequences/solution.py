class Solution:
    def numDistinct(self, s, t):

        '''@lru_cache(maxsize = None)
        def helper(ti, si):
            if si < 0: return 0

            if t[ti] == s[si]:
                if ti == 0: return 1 + helper(ti, si-1)
                return helper(ti-1, si-1) + helper(ti, si-1)

            return helper(ti, si-1)
            pass

        return helper(len(t)-1, len(s)-1)'''

    def numDistinct(self, s, t):
        ss, ts = len(s), len(t)
        dp = [[0 for _ in range(ss)] for _ in range(ts)]

        for i in range(ts):
            for j in range(i, ss):
                if j > 0: dp[i][j] = dp[i][j-1];

                if t[i] == s[j]:
                    if not i:
                        dp[i][j] += 1
                    else:
                        dp[i][j] = dp[i-1][j-1] + dp[i][j-1]

        return dp[ts-1][ss-1]
