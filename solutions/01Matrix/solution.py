class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        lny, lnx = len(mat), len(mat[0])

        ret = [[0 for _ in range(lnx)] for _ in range(lny)]
        q = []
        done = set()

        for i in range(lny):
            for j in range(lnx):
                if not mat[i][j]:
                    q.append((i, j))
                    done.add((i,j))

        d = 0

        while q:
            newq = []

            for y, x in q:
                ret[y][x] = d

                if x-1 >= 0 and (y, x-1) not in done:
                    newq.append((y, x-1))
                    done.add((y, x-1))

                if x+1 < lnx and (y, x+1) not in done:
                    newq.append((y, x+1))
                    done.add((y, x+1))

                if y-1 >= 0 and (y-1, x) not in done:
                    newq.append((y-1, x))
                    done.add((y-1, x))

                if y+1 < lny and (y+1, x) not in done:
                    newq.append((y+1, x))
                    done.add((y+1,x))

            q = newq
            d += 1

        return ret
        pass
