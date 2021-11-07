class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        ln = len(graph)

        seen = set()

        def bfs(root):
            q = [[root, 'A']]
            A, B = set(), set()

            while q:
                n, group = q.pop(0)

                if group == 'A': A.add(n)
                if group == 'B': B.add(n)

                for nb in graph[n]:
                    if group == 'A' and nb in A: return False
                    if group == 'B' and nb in B: return False

                    if nb in seen: continue

                    if group == 'A': q.append([nb, 'B'])
                    if group == 'B': q.append([nb, 'A'])

                    seen.add(nb)

            return True
            pass

        for i in range(ln):
            if i not in seen:
                if not bfs(i): return False

        return True
        pass
