class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        l1, l2, l3 = len(s1), len(s2), len(s3)
        if l1 + l2 != l3: return False

        @lru_cache(maxsize = None)
        def f(i1, i2):
            if i1 == l1 and i2 == l2: return True

            if i1 < l1 and s1[i1] == s3[i1+i2]:
                if f(i1+1, i2): return True
            if i2 < l2 and s2[i2] == s3[i1+i2]:
                if f(i1, i2+1): return True

            return False
            pass

        return f(0, 0)
        pass
