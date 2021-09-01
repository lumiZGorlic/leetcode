class Solution:
    def generate(self, nr: int) -> List[List[int]]:
        ret = [[1]]
        if nr == 1: return ret
        ret.append([1, 1])
        if nr == 2: return ret

        for i in range(2, nr):
            row = [1]

            for j in range(0, len(ret[-1])-1):
                row.append(ret[-1][j] + ret[-1][j+1])

            row.append(1)
            ret.append(row)

        return ret
