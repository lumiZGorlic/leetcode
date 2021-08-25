class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        ret = []
        dirs = {'n': (-1,0), 's': (1,0), 'e': (0, 1), 'w': (0, -1)} # directions
        dc = {'n': 'e', 'e': 's', 's': 'w', 'w': 'n'}               # direction change

        ly, lx = len(matrix), len(matrix[0])

        done = [[0 for _ in range(lx)] for _ in range(ly)]

        y, x = 0, 0
        d = 'e'
        dy, dx = dirs[d]
        cnt = ly*lx

        while 1:
            ret.append(matrix[y][x])
            done[y][x] = 1

            cnt -= 1
            if not cnt: break

            if y+dy == -1 or y+dy == ly or x+dx == -1 or x+dx == lx or done[y+dy][x+dx]:
                d = dc[d]
                dy, dx = dirs[d]

            y += dy
            x += dx

        return ret
        pass
