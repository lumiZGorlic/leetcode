class Solution:
    def shortestCommonSupersequence(self, s1: str, s2: str) -> str:
        @lru_cache(maxsize = None)
        def helper(i1, i2):
            ln1, ln2 = len(s1), len(s2)
            if i1 >= ln1 and i2 >= ln2:
                return []
            elif i1 < ln1 and i2 < ln2:
                if s1[i1] == s2[i2]:
                    return [s1[i1]] + helper(i1+1, i2+1)
                else:
                    ret1, ret2 = helper(i1+1, i2), helper(i1, i2+1)
                    if len(ret1) <= len(ret2):
                        return [s1[i1]] + ret1
                    else:
                        return [s2[i2]] + ret2
            elif i1 < ln1:
                return list(s1[i1:])
            else:
                return list(s2[i2:])
        pass

        return ''.join(helper(0, 0))
        pass
