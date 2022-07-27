class Solution:
    def countSubstrings(self, s: str) -> int:
        '''ln = len(s)
        dp = [[0 for _ in range(ln)] for _ in range(ln)]
        for i in range(ln): dp[i][i] = 1

        ret = ln
        
        for i in range(ln):
            for j in range(i-1,-1,-1):
                if s[i] == s[j]:
                    if j == i-1 or dp[i-1][j+1]:
                        dp[i][j] = 1
                        ret += 1
                        
        return ret
        '''

        N = len(s)
        ans = 0
        for center in range(2*N - 1):
            left = center // 2
            right = left + center % 2
            while left >= 0 and right < N and s[left] == s[right]:
                ans += 1
                left -= 1
                right += 1

        return ans
