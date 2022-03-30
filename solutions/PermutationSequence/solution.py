class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        def helper(l, k):
            ln = len(l)
            if not ln: return []
            f = math.factorial(ln-1)
            idx = (k-1) // f
            return [l[idx]] + helper(l[:idx] + l[idx+1:], k-idx*f)

        return ''.join([str(c) for c in helper([i for i in range(1, n+1)], k)])
        pass
