class Solution:
    def isMatch(self, s: str, p: str) -> bool:

        @lru_cache(None)
        def helper(s1, s2):
            if not s1 and not s2: return True
            if not s2: return False

            if len(s2) >= 2 and s2[1] == '*':
                return helper(s1, s2[0:1] + s2[2:]) or helper(s1, s2[0:1] + s2[0:1] + s2[1:]) or helper(s1, s2[2:])

            if not s1: return False

            if s1[0] == s2[0]: return helper(s1[1:], s2[1:])
            if s2[0] == '.': return helper(s1[1:], s2[1:])

            return False
            pass

        return helper(s, p)
        pass
