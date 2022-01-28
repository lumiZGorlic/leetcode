class Solution:
    def numDecodings(self, s: str) -> int:
        ln = len(s)
        if s[0] == '0': return 0

        dp = [1 for _ in range(ln+1)]

        for i in range(1, ln):
            if s[i] == '0':
                if s[i-1] not in '12':
                    return 0
                dp[i+1] = dp[i-1]
            else:
                if s[i-1] == '1':
                    dp[i+1] = dp[i-1] + dp[i]
                elif s[i-1] == '2' and s[i] in '123456':
                    dp[i+1] = dp[i-1] + dp[i]
                else:
                    dp[i+1] = dp[i]

        return dp[-1]
        pass
