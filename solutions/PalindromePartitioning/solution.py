class Solution:
    def partition(self, s: str) -> List[List[str]]:
        ln = len(s)
        ret = []

        dp = [[0 for _ in range(ln)] for _ in range(ln)]
        for i in range(ln): dp[i][i] = 1

        for l in range(1, ln):  # looking for palindromes of length l
            for i in range(ln):
                if i+l >= ln: continue
                if s[i] == s[i+l]:
                    if l == 1 or dp[i+1][i+l-1]:
                        dp[i][i+l] = 1

        cur = []

        def f(idx):
            if idx == ln:
                partit = []  # cur hold indexes so based on that now need to get partition
                for l, r in cur:
                    partit.append(s[l:r+1])
                ret.append(partit)
                return

            for i in range(idx, ln):
                if dp[idx][i]:
                    cur.append([idx, i])
                    f(i+1)
                    cur.pop()
            pass

        f(0)
        return ret
        pass
