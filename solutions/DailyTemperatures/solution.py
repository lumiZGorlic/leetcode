class Solution:
    def dailyTemperatures(self, temps: List[int]) -> List[int]:
        ln = len(temps)
        ret, s = [0], [[temps[ln-1], ln-1]]

        for i in range(ln-2, -1, -1):
            if s[-1][0] > temps[i]:
                ret.append(s[-1][1] - i)
            else:
                while s and s[-1][0] <= temps[i]: s.pop()

                if s: ret.append(s[-1][1] - i)
                if not s: ret.append(0)

            s.append([temps[i], i])

        return ret[::-1]
        pass
