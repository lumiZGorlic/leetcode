class Solution:
    def advantageCount(self, A: List[int], B: List[int]) -> List[int]:
        ln = len(A)

        # 'n' - not done
        A = [[v, i, 'n'] for i, v in enumerate(A)]
        B = [[v, i]      for i, v in enumerate(B)]

        A.sort()
        B.sort()

        idxs = set([i for i in range(ln)])
        ret = [-1 for _ in range(ln)]
        ia, ib = 0, 0

        while ib < ln:

            while ia < ln:
                if A[ia][0] > B[ib][0]:
                    ret[B[ib][1]] = A[ia][0]
                    # 'd' - done
                    A[ia][2] = 'd'
                    idxs.remove(B[ib][1])
                    ia += 1
                    break
                else:
                    ia += 1
                    
            if ia >= ln: break
            ib += 1

        for a in A:
            if a[2] == 'n':
                ret[idxs.pop()] = a[0]

        return ret
        pass
