class Solution:
    def prisonAfterNDays(self, cells: List[int], N: int) -> List[int]:
        newcells = [0 for _ in range(8)]
        for i in range(1, 7):
            if (cells[i-1] and cells[i+1]) or (not cells[i-1] and not cells[i+1]): newcells[i] = 1
        cells = newcells[:]
        N -= 1

        if not N: return cells

        # now after first iteration we are sure first and last element are '0', we can try to detect cycles 
        orig = tuple(cells)
        n = 0

        while n < N:
            newcells = [0 for _ in range(8)]
            for i in range(1, 7):
                if (cells[i-1] and cells[i+1]) or (not cells[i-1] and not cells[i+1]): newcells[i] = 1
            cells = newcells[:]

            n += 1

            if tuple(cells) == orig:
                N %= n
                n = 0

        return cells
        pass
