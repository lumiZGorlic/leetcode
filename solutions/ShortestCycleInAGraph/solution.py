class Solution:
    def findShortestCycle(self, n: int, edges: List[List[int]]) -> int:
        gr = defaultdict(set)
        for e1, e2 in edges:
            gr[e1].add(e2)
            gr[e2].add(e1)

        ret = 10000

        def dfs(node, nogo, node2H, h):
            nonlocal ret

            if h+1 >= ret: return

            node2H[node] = h

            for e in gr[node]:
                if e != nogo:
                    if e in node2H:
                        ret = min(ret, h - node2H[e] + 1)
                    else:
                        dfs(e, node, node2H, h+1)

            del node2H[node]
            pass


        for i in range(n):
            node2H = {}
            dfs(i, -1, node2H, 0)

        if ret == 10000: return -1
        return ret
        pass
