class Solution:
    def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
        def constrGraph(edg):
            g = defaultdict(list)
            for e in edg:
                g[e[0]].append(e[1])
                g[e[1]].append(e[0])
            return g
            pass

        g = constrGraph(edges)
        nOfN = len(g)

        def dfs(n, seen, orig):
            for nbr in g[n]:
                if nbr == orig: continue
                if nbr in seen: return False

                seen.add(nbr)

                if not dfs(nbr, seen, n): return False

            return True
            pass

        edges.reverse()

        for i in range(len(edges)):
            g = constrGraph(edges[:i] + edges[i+1:])

            # if '1' not in g, then by removing edge[i] we just diconnect '1', so its not the edge we are after
            if 1 not in g: continue

            seen = set([1])

            if dfs(1, seen, 1) and len(seen) == nOfN:
                return edges[i]

        pass
