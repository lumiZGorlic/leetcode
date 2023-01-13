class Solution:
    def maxJumps(self, arr: List[int], d: int) -> int:
        ln = len(arr)

        arr2 = [[i, arr[i]] for i in range(ln)]
        arr2.sort(key = lambda x: x[1])

        dp = [0 for _ in range(ln)]

        for i, v in arr2:
            mx = 0

            idx = i+1
            while idx < ln and idx-i <= d and arr[idx] < v:
                mx = max(mx, dp[idx]+1)
                idx += 1

            idx = i-1
            while idx >= 0 and i-idx <= d and arr[idx] < v:
                mx = max(mx, dp[idx]+1)
                idx -= 1

            dp[i] = mx

        return max(dp)+1
        pass
