class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        #Do not return anything, modify matrix in-place instead.
        ln = len(matrix)
        mx = ln // 2

        for l in range(mx):
            r = ln-l-1

            for j in range(r-l):
                tmp1 = matrix[l+j][r]
                matrix[l+j][r] = matrix[l][l+j]

                tmp2 = matrix[r][r-j]
                matrix[r][r-j] = tmp1

                tmp3 = matrix[r-j][l]
                matrix[r-j][l] = tmp2

                matrix[l][l+j] = tmp3

        pass

        # consider rotating frames and indexes convention like below 
        '''
        (l  ,l) (l,l+1) (l, l+2) . . .  (l,   r)
        (l+1,l)                         (l+1, r)
        (l+2,l)                         (l+2, r)
        .                               .
        .                               .
        .                               .
        (r, l) (r, l+1) . . . . . . . . (r, r)
        '''
