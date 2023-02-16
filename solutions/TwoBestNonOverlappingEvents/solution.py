from bisect import bisect_left

class Solution:
    def maxTwoEvents(self, evs: List[List[int]]) -> int:
        evs.sort(key = lambda x: x[1])

        dp = { 0 : 0 }
        ret, curmax = 0, 0

        for b, e, v in evs:
            curmax = max(curmax, v)
            dp[e] = curmax

        ends = sorted(dp.keys())

        for b, e, v in evs:
            below = bisect_left(ends, b) - 1
            ret = max(ret, v + dp[ ends[below] ])

        return ret
        pass
