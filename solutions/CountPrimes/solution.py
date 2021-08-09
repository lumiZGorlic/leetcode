class Solution:
    def countPrimes(self, n: int) -> int:
        if n <= 2: return 0

        ans = [1 for _ in range(n)]

        for i in range(2, ceil(sqrt(n))):
            for j in range(i*i, n, i):
                ans[j] = 0

        return sum(ans)-2
        pass
