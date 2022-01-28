class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        s2t, t2s = {}, {}

        for sc, tc in zip(s, t):
            if sc in s2t and s2t[sc] != tc: return False
            if tc in t2s and t2s[tc] != sc: return False
            s2t[sc] = tc
            t2s[tc] = sc

        return True
        pass

# an interesting follow up questions would be to group the isomorphic strings
# i guess below function that does encoding could be used to solve that
'''
    def string_to_int(self, s):
        output = []
        count = 0
        cache = defaultdict(int)

        for char in s:
            if char in cache:
                output.append(cache[char])
            else:
                output.append(count)
                cache[char] = count
                count += 1

        return tuple(output)
'''
