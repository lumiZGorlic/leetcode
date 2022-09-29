class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        ret, mx = 0, -1

        for i, v in enumerate(arr):
            mx = max(mx, v)
            if mx == i: ret += 1

        return ret
        pass
