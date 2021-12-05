class Solution:
    def shortestBridge(self, A: List[List[int]]) -> int:
        n, m = len(A), len(A[0])

        isl1, isl2 = [], []
        done1, done2 = set(), set()

        def dfs(isl, done, y, x, n, m):
            if y < 0 or y >= n or x < 0 or x >= m: return
            if A[y][x] == 0 or (y,x) in done: return

            isl.append([y, x, -1])
            done.add((y,x))

            dfs(isl, done, y-1, x,   n, m)
            dfs(isl, done, y+1, x,   n, m)
            dfs(isl, done, y,   x-1, n, m)
            dfs(isl, done, y,   x+1, n, m)
            pass

        for i in range(n):
            for j in range(m):
                if A[i][j] == 1:
                    if not isl1:                             dfs(isl1, done1, i, j, n, m)
                    elif ((i,j) not in done1) and not done2: dfs(isl2, done2, i, j, n, m)

        while isl1:
            y, x, dpth = isl1.pop(0)

            if (y,x) in done2: return dpth

            if y-1 >= 0 and (y-1, x) not in done1:
                    isl1.append([y-1, x, dpth+1])
                    done1.add((y-1,x))

            if y+1 < n and (y+1, x) not in done1:
                    isl1.append([y+1, x, dpth+1])
                    done1.add((y+1, x))

            if x-1 >= 0 and (y, x-1) not in done1:
                    isl1.append([y, x-1, dpth+1])
                    done1.add((y, x-1))

            if x+1 < m and (y, x+1) not in done1:
                    isl1.append([y, x+1, dpth+1])
                    done1.add((y, x+1))

        return 0
        pass
