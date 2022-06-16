class Solution:
    def kSimilarity(self, A: str, B: str) -> int:
        ln = len(A)
        A, B = list(A), list(B)

        mp = defaultdict(set)
        for i, c in enumerate(A): mp[c].add(i)

        def updt(i1, i2):
            mp[A[i1]].remove(i1)
            mp[A[i1]].add(i2)
            mp[A[i2]].remove(i2)
            mp[A[i2]].add(i1)
            A[i1], A[i2] = A[i2], A[i1]            
            pass

        @lru_cache(None)
        def helper(tpl, ii):
            if ii >= len(tpl): return 0
            ret = 20

            for i in range(ii, len(A)):
                if A[i] != B[i]:
                    idxs = mp[B[i]].copy()

                    for idx in idxs:
                        if idx < i: continue
                        updt(i, idx)
                        ret = min(ret, 1 + helper(tuple(A), i+1))
                        updt(i, idx)

                    break

            if ret == 20: return 0
            return ret
            pass

        return helper(tuple(A), 0)
        pass
