class Solution:
    def numberOfArithmeticSlices(self, A: List[int]) -> int:
        ln, ret = len(A), 0
        if ln < 3: return 0

        diff, cntPairs = A[1] - A[0], 0

        for i in range(1, ln):
            if A[i] - A[i-1] == diff:
                cntPairs += 1
            else:
                if cntPairs >= 2:
                    # Gauss formula
                    v = cntPairs + 1 - 2
                    ret += v * (v+1) // 2

                diff = A[i] - A[i-1]
                cntPairs = 1

        if cntPairs >= 2:
            # Gauss formula
            v = cntPairs + 1 - 2
            ret += v * (v+1) // 2

        return ret
        pass
