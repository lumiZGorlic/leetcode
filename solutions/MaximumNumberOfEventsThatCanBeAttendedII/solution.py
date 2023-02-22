from bisect import bisect_left

class Solution:
    def maxValue(self, evs: List[List[int]], k: int) -> int:
        ln = len(evs)
        evs.sort(key = lambda x: x[1])
        ends = [e[1] for e in evs]

        @lru_cache(maxsize = None)
        def dfs(idx, todo):
            if idx < 0: return 0
            if todo <= 0: return 0
            if idx == 0: return evs[idx][2]
            
            x1 = dfs(idx-1, todo)

            b = evs[idx][0]
            newidx = bisect_left(ends, b)-1

            x2 = evs[idx][2] + dfs(newidx, todo-1)
            return max(x1, x2)
            pass


        return dfs(ln-1, k)
