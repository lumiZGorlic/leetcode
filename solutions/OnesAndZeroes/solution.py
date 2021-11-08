class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        cnt = [[s.count('0'), s.count('1')] for s in strs]
        ret = 0

        @lru_cache(maxsize=None)
        def helper(idx, mToDo, nToDo, used):
            nonlocal ret
            if mToDo < 0 or nToDo < 0: return

            ret = max(ret, used)

            if idx >= len(cnt): return

            helper(idx+1, mToDo-cnt[idx][0], nToDo-cnt[idx][1], used+1)
            helper(idx+1, mToDo, nToDo, used)
            pass

        helper(0, m, n, 0)
        return ret
        pass
