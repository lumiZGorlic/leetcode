class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        if not len(s): return 0

        sign = 1
        mp = { '+': 1, '-':-1 }

        if s[0] in '-+':
            sign = mp[s[0]]
            s = s[1:]

        digs = set(list('0123456789'))

        for i in range(len(s)):
            if s[i] not in digs:
                s = s[:i]
                break

        if not len(s): return 0
        n = sign * int(s)
        n = max(n, -2147483648)
        n = min(n, 2147483647)
        return n
        
