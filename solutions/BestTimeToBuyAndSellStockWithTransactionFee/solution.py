class Solution:
    def maxProfit(self, p: List[int], fee: int) -> int:
        ln = len(p)
        hold, nohold = -p[0], 0

        for i in range(1, ln):
            h = hold
            hold = max(hold, nohold - p[i])
            nohold = max(nohold, h + p[i] - fee)

        return max(hold, nohold)
        pass
