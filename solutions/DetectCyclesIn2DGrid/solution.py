class Solution:
    def containsCycle(self, grid: List[List[str]]) -> bool:
        def dfs(node, parent):
            if node in visited: return True
            visited.add(node)
            nx,ny = node
            childs = []
            new_directions = [[nx+1,ny],[nx-1, ny],[nx,ny+1],[nx,ny-1]]

            for cx,cy in new_directions:
                # do the dfs with restrictions on where we can go: 
                # -if the new index is in within the same boundaries, and
                # -it has the same grid value, and
                # -the index is not equal to the index of the previous index
                if 0 <= cx < m and 0 <= cy < n and grid[cx][cy] == grid[nx][ny] and (cx,cy) != parent:
                    childs.append((cx,cy))
            # search through our possible directions
            for x in childs:
                if dfs(x, node): return True 
            return False  

        m, n = len(grid), len(grid[0])
        visited = set()
        for i in range(m):
            for j in range(n):
                # only use a cell as the starting positon once
                if (i,j) in visited: 
                    continue 
                # parent argument is for the last index we were at, this is initially None as we havent been anywhere
                if dfs((i,j), None): 
                    return True
        return False

'''
    def containsCycle(self, grid: List[List[str]]) -> bool:

        def bfs(y, x):
            lny, lnx = len(grid), len(grid[0])
            v = grid[y][x]

            q = [(y,x)]
            done = set()

            while q:
                newq = []

                for y, x in q:
                    grid[y][x] = 0

                    if (y, x-1) in newq: return True
                    if x-1 >= 0 and (y, x-1) not in done and grid[y][x-1] == v:
                        newq.append((y, x-1))
                        done.add((y, x-1))

                    if (y, x+1) in newq: return True
                    if x+1 < lnx and (y, x+1) not in done and grid[y][x+1] == v:
                        newq.append((y, x+1))
                        done.add((y, x+1))

                    if (y-1, x) in newq: return True
                    if y-1 >= 0 and (y-1, x) not in done and grid[y-1][x] == v:
                        newq.append((y-1, x))
                        done.add((y-1, x))

                    if (y+1, x) in newq: return True
                    if y+1 < lny and (y+1, x) not in done and grid[y+1][x] == v:
                        newq.append((y+1, x))
                        done.add((y+1,x))

                q = newq

            return False
            pass

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] != 0 and bfs(i,j): return True

        return False
        pass
'''
