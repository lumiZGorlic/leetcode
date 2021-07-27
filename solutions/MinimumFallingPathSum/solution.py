class Solution:
    def minFallingPathSum(self, mtx: List[List[int]]) -> int:
        n = len(mtx)

        for i in range(1, n):
            for j in range(n):
                if not j:
                    mtx[i][j] = mtx[i][j] + min(mtx[i-1][j], mtx[i-1][j+1])
                elif j == n-1:
                    mtx[i][j] = mtx[i][j] + min(mtx[i-1][j], mtx[i-1][j-1])
                else:
                    mtx[i][j] = mtx[i][j] + min(mtx[i-1][j], mtx[i-1][j+1], mtx[i-1][j-1])

        return min(mtx[-1])
