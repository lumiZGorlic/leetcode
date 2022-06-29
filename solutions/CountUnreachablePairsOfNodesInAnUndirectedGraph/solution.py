class UnionFind:
    def __init__(self, size):
        self.root = [i for i in range(size)]
        self.rank = [1] * size
    def find(self, x):
        if x == self.root[x]:
            return x
        self.root[x] = self.find(self.root[x])
        return self.root[x]
    def union(self, x, y):
        rootX = self.find(x)
        rootY = self.find(y)
        if rootX != rootY:
            if self.rank[rootX] > self.rank[rootY]:
                self.root[rootY] = rootX
            elif self.rank[rootX] < self.rank[rootY]:
                self.root[rootX] = rootY
            else:
                self.root[rootY] = rootX
                self.rank[rootX] += 1

class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        dsu = UnionFind(n)
        for u, v in edges:
            dsu.union(u, v)
        C = Counter([dsu.find(i) for i in range(n)])
        groupCounts = list(C.values())
        ans = 0
        firstGroupCount = groupCounts[0]
        for i in range(1, len(groupCounts)):
            ans += firstGroupCount * groupCounts[i]
            firstGroupCount += groupCounts[i]  
        return ans

'''
class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        ret = 0

        gr = defaultdict(set)
        for e1, e2 in edges:
            gr[e1].add(e2)
            gr[e2].add(e1)

        done = set()
        areas = defaultdict(set)

        def dfs (nd, aNr):
            for nb in gr[nd]:
                if nb in done: continue
                areas[aNr].add(nb)
                done.add(nb)
                dfs(nb, aNr)
            pass

        aNr = 0
        for nd in range(n):
            if nd in gr and nd not in done:
                done.add(nd)
                areas[aNr].add(nd)
                dfs(nd, aNr)
                aNr += 1

        for a, nds in areas.items():
            ret += len(nds) * (n - len(nds))
        for i in range(n):
            if i not in gr: ret += n-1

        return ret // 2
'''
