row = [ set() for i in range(9) ]
cols = [ set() for i in range(9)]
subboards = [ [set() for i in range(3)] for j in range(3)]

def initStuff(board):
    global row, cols, subboards
    row = [ set() for i in range(9) ]
    cols = [ set() for i in range(9)]
    subboards = [ [set() for i in range(3)] for j in range(3)]

    for i in range(9):
        for j in range(9):
            c = board[i][j]
            row[i].add(c)
            cols[j].add(c)
            idy, idx = int(i/3), int(j/3)
            subboards[idy][idx].add(c)
    pass

def helper(board, iny, inx):
    global row, cols, subboards

    if inx > 8:
        iny += 1
        inx = 0

    if iny == 9: return True
    if board[iny][inx] != '.': return helper(board, iny, inx+1)

    for i in range(1,10):
        n = str(i)

        if n not in row[iny] and n not in cols[inx] and n not in subboards[int(iny/3)][int(inx/3)]:
            row[iny].add(n)
            cols[inx].add(n)
            subboards[int(iny/3)][int(inx/3)].add(n)
            board[iny][inx] = n

            if helper(board, iny, inx+1): return True

            row[iny].remove(n)
            cols[inx].remove(n)
            subboards[int(iny/3)][int(inx/3)].remove(n)
            board[iny][inx] = '.'

    return False
    pass

class Solution:
    def solveSudoku(self, board):
        initStuff(board)
        helper(board, 0, 0)
        return board
        pass
