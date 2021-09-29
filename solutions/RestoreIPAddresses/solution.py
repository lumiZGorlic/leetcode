class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        ln = len(s)
        ret, cur = [], []

        def f(idx, n):
            if idx == ln and n==4:
                ret.append('.'.join(cur))
                return

            if n > 4: return

            if idx+1 > ln: return

            cur.append(s[idx:idx+1])
            f(idx+1, n+1)
            cur.pop()

            if s[idx] == '0' or idx+2 > ln: return

            cur.append(s[idx:idx+2])
            f(idx+2, n+1)
            cur.pop()

            if idx+3 > ln or int(s[idx:idx+3]) > 255: return

            cur.append(s[idx:idx+3])
            f(idx+3, n+1)
            cur.pop()
            pass

        f(0, 0) 
        return ret
        pass
