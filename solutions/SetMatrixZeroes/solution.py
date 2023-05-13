class Solution:
    def setZeroes(self, mtx: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        ln1, ln2 = len(mtx), len(mtx[0])
        
        for i in range(ln1):
            for j in range(ln2):
                if mtx[i][j] == 0:
                    mtx[i][j] = 'x' # special value

        for i in range(ln1):
            for j in range(ln2):
                if mtx[i][j] == 'x':
                    for k in range(0, ln1):
                        if mtx[k][j] != 'x':
                            mtx[k][j] = 0
                    for k in range(0, ln2):
                        if mtx[i][k] != 'x':
                            mtx[i][k] = 0
                            
                    mtx[i][j] = 0

        pass        
