class Solution:
    def maxProfit(self, p: List[int]) -> int:
        ln = len(p)
        if ln < 2: return 0

        hold = -min(p[0], p[1])
        nohold = 0
        noholdsold = p[1] - p[0]

        for i in range(2, ln):
            tmp = hold
            hold = max(hold, nohold - p[i])
            nohold = max(nohold, noholdsold)
            noholdsold = tmp + p[i]

        return max(nohold, noholdsold)
        pass
