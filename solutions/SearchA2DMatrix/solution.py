class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        n, m = len(matrix), len(matrix[0])

        idx2yx = lambda idx: (idx // m, idx % m)

        l, r = 0, n*m-1

        while l <= r:
            md = l + (r-l)//2
            y, x = idx2yx(md)

            if matrix[y][x] == target:
                return True
            elif matrix[y][x] > target:
                r = md-1
            else:
                l = md+1

        return False
        pass
