class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        ln, ret = len(arr), 0

        mn = [inf for i in range(ln)]
        mn_cur = 10000000000

        for i in range(ln-1, -1, -1):
            mn[i] = mn_cur
            mn_cur = min(mn_cur, arr[i])

        mx = 0
        for i in range(ln):
            mx = max(mx, arr[i])
            
            if mx <= mn[i]:
                ret += 1

        return ret
        pass
