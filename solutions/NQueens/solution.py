class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ret = []
        rows, cols, diag_a1h8, diag_a8h1 = set(), set(), set(), set()

        def addAnswer():
            ans = []
            for col in cur: ans.append("".join(['.']*(col-1) + ['Q'] + ['.']*(n-col)))
            ret.append(ans)
            pass

        def doRow(row):
            if row == n+1:
                addAnswer()
                return

            for col in range(1, n+1):
                if row in rows or col in cols or row-col in diag_a1h8 or row+col in diag_a8h1:
                    continue

                rows.add(row)
                cols.add(col)
                diag_a1h8.add(row-col)
                diag_a8h1.add(row+col)

                cur.append(col)
                doRow(row+1)
                cur.pop()

                rows.discard(row)
                cols.discard(col)
                diag_a1h8.discard(row-col)
                diag_a8h1.discard(row+col)

            pass

        cur = []
        doRow(1)
        return ret
        pass
