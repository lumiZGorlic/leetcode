class Solution:
    def longestWPI(self, hrs: List[int]) -> int:
        days = [h > 8 for h in hrs]

        mp = { }
        ret, diff = 0, 0

        for i, tiring in enumerate(days):
            if tiring: diff += 1
            else: diff -= 1

            # whole subarray up to current index is well performing
            if diff > 0: ret = i+1

            if tiring and diff <= 0 and diff-1 in mp:
                ret = max(ret, i-mp[diff-1])

            if diff not in mp: mp[diff] = i

        return ret
        pass
