class Solution:
    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:
        ret = 0

        tree = defaultdict(list)
        for e in edges:
            tree[e[0]].append(e[1])
            tree[e[1]].append(e[0])

        seen = set()

        def dfs(root):
            nonlocal ret
            seen.add(root)

            appleUnder = False

            for nb in tree[root]:
                if nb in seen: continue
                if dfs(nb):
                    ret += 2
                    appleUnder = True

            return hasApple[root] or appleUnder
            pass

        dfs(0)
        return ret
        pass
