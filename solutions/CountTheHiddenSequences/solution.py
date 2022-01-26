class Solution:
    def numberOfArrays(self, differences: List[int], lower: int, upper: int) -> int:
        lcur, ucur = lower, upper

        # before starting a range of possible values is
        # [lower, upper], then after each iteration we transform
        # it accordingly
        for dif in differences:
            if dif > 0:
                ucur = min(ucur+dif, upper)
                lcur += dif
            elif dif < 0:
                lcur = max(lcur+dif, lower)
                ucur += dif

            if lcur > upper or ucur < lower: return 0

        return ucur - lcur + 1
        pass
