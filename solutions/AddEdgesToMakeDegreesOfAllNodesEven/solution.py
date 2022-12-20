class Solution:
    def isPossible(self, n: int, edges: List[List[int]]) -> bool:
        g = [set() for _ in range(n+1)]
        for n1, n2 in edges:
            g[n1].add(n2)
            g[n2].add(n1)

        odds = [] # collect nodes with odd number of edges
        for i in range(1, n+1):
            if len(g[i]) % 2: odds.append(i)

        ln = len(odds)
        if not ln: return True
        if ln > 4 or ln == 1 or ln == 3: return False 

        if ln == 2:
            a, b = odds
            if a not in g[b]: return True

            for i in range(1, n+1):
                if i in [a,b]: continue
                if i not in g[a] and i not in g[b]: return True
            return False

        if ln == 4: # the only way to do it is to add edges between them, try all combinations
            for i in range(4):
                for j in range(4):
                    for k in range(4):
                        for l in range(4):
                            if len( set([i,j,k,l]) ) != 4: continue
                            if odds[i] not in g[odds[j]] and odds[k] not in g[odds[l]]:
                                return True
            return False

        return False
        pass
