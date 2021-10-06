# the below solution actully times out

class Solution:
    def maxProfit(self, K: int, prices: List[int]) -> int:
        ln = len(prices)
        if not K or ln < 2: return 0
        
        dp = [[0 for _ in range(ln)] for _ in range(K+1)]
        
        for i in range(1, K+1):
            for j in range(1, ln):
                dp[i][j] = dp[i][j-1]

                for k in range(j-1, -1, -1):
                    tmp = prices[j] - prices[k] + dp[i-1][k]
                    dp[i][j] = max(dp[i][j], tmp)

        return dp[K][ln-1]
        pass

