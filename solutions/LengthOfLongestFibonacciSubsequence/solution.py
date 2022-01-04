class Solution:
    def lenLongestFibSubseq(self, A: List[int]) -> int:
        ln, ret = len(A), 0
        mys = set(A)

        for i in range(ln):
            for j in range(i+1,ln):
                a, b= A[i], A[j]
                c = a + b
                if c in mys:
                    tmp = 2

                    while c in mys:
                        a, b = b, c
                        c = a + b
                        tmp += 1

                    ret = max(tmp, ret)
        
        return ret
        pass
