class Solution:
    def findMinDifference(self, tp: List[str]) -> int:
        ln = len(tp)

        tp = [[int(s[:2]), int(s[3:])] for s in tp]
        tp = [60*h+m for h,m in tp]

        tp.sort()
        ret = 10**20 # very big int

        for i in range(1, ln):
            ret = min(ret, tp[i] - tp[i-1])

        return min(ret, tp[0]+(1440-tp[-1]))
        pass
