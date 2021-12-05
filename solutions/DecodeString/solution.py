class Solution:
    def decodeString(self, s: str) -> str:
        matchingBracket = {}
        stack = []

        for i, v in enumerate(s):
            if v == '[': stack.append(i)
            elif v == ']': matchingBracket[stack.pop()] = i

        def helper(l, r):
            factor, ret = [], []

            while l <= r:
                if s[l].isalpha():
                    ret += s[l]
                    l += 1
                elif s[l] == '[':
                    new_l = l
                    new_r = matchingBracket[new_l]

                    ret += int(''.join(factor)) * helper(new_l+1, new_r-1)
                    factor = []
                    l = new_r+1
                else:
                    factor += s[l]
                    l += 1

            return ret
            pass

        return ''.join(helper(0, len(s)-1))
        pass
