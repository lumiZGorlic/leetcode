
class Solution:
    def canCross(self, stones: List[int]) -> bool:
        ln = len(stones)
        # position to index mapping
        mp = { j:i for i, j in enumerate(stones) }

        @lru_cache(maxsize=None)
        def helper(idx, jmps):
            if idx == len(stones)-1: return True
            if idx > len(stones)-1: return False

            pos = stones[idx]

            for d in jmps:
                if d and pos + d in mp:
                    if helper(mp[pos+d], (d-1, d, d+1)): return True

            return False
            pass

        return helper(0, (1, 0))
        pass
