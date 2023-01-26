class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        @lru_cache(maxsize = None)
        def dfs(idx):
            ln = len(days)

            if idx >= ln: return 0
            dpass = costs[0] + dfs(idx+1)

            wpass = costs[1]
            idx2 = idx
            while idx2 < ln and days[idx2] <= days[idx]+6:
                idx2 += 1
            wpass += dfs(idx2)

            mpass = costs[2]
            while idx2 < ln and days[idx2] <= days[idx]+29:
                idx2 += 1
            mpass += dfs(idx2)

            return min([dpass, wpass, mpass])
            pass

        return dfs(0)
