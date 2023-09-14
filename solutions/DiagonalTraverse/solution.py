class Solution:
    def findDiagonalOrder(self, mtx: List[List[int]]) -> List[int]:
        ln, lm = len(mtx), len(mtx[0])
        
        d = defaultdict(list)
        
        for i in range(ln):
            for j in range(lm):
                d[(i+j)].append(mtx[i][j])
                
        mx = max(list(d.keys()))

        ret = []
        for i in range(mx+1):
            if i % 2 == 0:
                ret.extend(reversed(d[i]))
            else:
                ret.extend(d[i])
        
        return ret
        pass
        
