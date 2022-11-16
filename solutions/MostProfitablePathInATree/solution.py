class Solution:
    def mostProfitablePath(self, edges: List[List[int]], bob: int, amount: List[int]) -> int:
        ret, ln = -float(inf), len(edges)

        g = defaultdict(list)
        for a, b in edges:
            g[a].append(b)
            g[b].append(a)

        treeUp = defaultdict(list) # for bottom-up traversal for Bob
        treeDown = defaultdict(list) # for top-down traversal for Alice

        seen = set()
        def f(n):
            seen.add(n)
            chldr = g[n]
            for c in chldr:
                if c in seen: continue
                treeDown[n].append(c)
                treeUp[c].append(n)
                f(c)
        f(0)

        q = [[0, 0]]
        while q:
            newq = []

            for n, mon in q:
                if n == bob:
                    mon += amount[n] // 2
                else:
                    mon += amount[n]

                chldr = treeDown[n]
                if not chldr: ret = max(ret, mon)
                for c in chldr: newq.append([c, mon])

            q = newq
            amount[bob] = 0
            if treeUp[bob]: bob = treeUp[bob][0]

        return ret
        pass
