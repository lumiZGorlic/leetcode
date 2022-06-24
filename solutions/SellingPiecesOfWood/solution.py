# https://leetcode.com/problems/selling-pieces-of-wood/discuss/2168135/Python-Explanation-with-pictures-DP

class Solution:
    def sellingWood(self, m: int, n: int, P: List[List[int]]) -> int:
        dp = [[0] * (n + 1) for _ in range(m + 1)]
        for r, c, p in P:
            dp[r][c] = p
            
        for r in range(1, m + 1):
            for c in range(1, n + 1):
                # Find all the possible first cut:
                for nc in range(1, c // 2 + 1): 
                    dp[r][c] = max(dp[r][c], dp[r][nc] + dp[r][c - nc])
                for nr in range(1, r // 2 + 1):
                    dp[r][c] = max(dp[r][c], dp[nr][c] + dp[r - nr][c])
                    
        return dp[m][n]
        pass
