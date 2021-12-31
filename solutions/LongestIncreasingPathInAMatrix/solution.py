class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        n, m = len(matrix), len(matrix[0])
        ret = 0

        @lru_cache(maxsize=None)
        def dfs(y, x):
            nonlocal ret, n, m

            ans = 1
            if y-1 >= 0 and matrix[y-1][x] > matrix[y][x]: ans = max(1+dfs(y-1, x), ans)
            if y+1 < n and matrix[y+1][x] > matrix[y][x]:  ans = max(1+dfs(y+1,  x), ans)
            if x-1 >= 0 and matrix[y][x-1] > matrix[y][x]: ans = max(1+dfs(y, x-1), ans)
            if x+1 < m and matrix[y][x+1] > matrix[y][x]:  ans = max(1+dfs(y, x+1), ans)
            return ans
            pass

        for i in range(n):
            for j in range(m):
                ret = max(ret, dfs(i, j))

        return ret
        pass
