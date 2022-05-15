class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ret = []

        def f(idx, used, s):
            if s == n and len(used) == k:
                ret.append(list(used))
                return

            if s > n: return
            if len(used) > k: return
            if idx > 9: return

            f(idx+1, used, s)
            f(idx+1, used + [idx] , s+idx)
            pass

        f(1, [], 0)
        return ret
        pass

