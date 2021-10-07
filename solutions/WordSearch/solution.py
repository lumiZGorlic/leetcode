class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        lny, lnx = len(board), len(board[0])
        seen = set()

        def dfs(y, x, lny, lnx, idx):
            if y < 0 or y >= lny or x < 0 or x >= lnx: return False
            if (y, x) in seen: return 
            if board[y][x] != word[idx]: return False
            if idx == len(word)-1: return True

            seen.add((y, x))

            if dfs(y+1, x, lny, lnx, idx+1) or dfs(y-1, x, lny, lnx, idx+1) or dfs(y, x+1, lny, lnx, idx+1) or dfs(y, x-1, lny, lnx, idx+1):
                return True

            seen.remove((y, x))
            return False

        for y in range(lny):
            for x in range(lnx):
                if dfs(y, x, lny, lnx, 0): return True

        return False
        pass
