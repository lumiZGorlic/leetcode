class Solution:
    def canFinish(self, noc: int, pres: List[List[int]]) -> bool:
        # noc - number of courses
        graph = [set() for _ in range(noc)]

        # before taking course v1 need to finish v2. so v1 depends on v2.
        for v1, v2 in pres:
            graph[v1].add(v2)

        visited = [0] * noc

        def dfs(root):
            if visited[root] == -1: return False
            if visited[root] == 1: return True

            # node is being visited
            visited[root] = -1

            for n in graph[root]:
                if not dfs(n): return False

            # node has been visited
            visited[root] = 1
            return True
            pass

        for v in range(noc):
            if not dfs(v): return False

        return True
        pass
