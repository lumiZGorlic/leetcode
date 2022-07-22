class Solution:
    def calculateMinimumHP(self, d: List[List[int]]) -> int:

        @lru_cache(None)
        # return points you need to have to reach finish starting at [i,j]
        def f(i, j):
            n, m = len(d), len(d[0])
            if i == n or j == m: return 10000000000

            if i == n-1 and j == m-1:
                if d[i][j] < 0:
                    return -d[i][j] + 1
                else:
                    return 1

            ret = -min(f(i+1, j), f(i, j+1)) + d[i][j]

            if ret < 0:
                return -ret
            else:
                return 1
            pass

        return f(0, 0)
        pass
