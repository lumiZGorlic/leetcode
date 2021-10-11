# if i do search sr -> dst, some tests time out. Only if i do it dst -> src then it works. dunno why.

class Solution:
    def findCheapestPrice(self, n: int, fl: List[List[int]], src: int, dst: int, K: int) -> int:
        gr = {i : [] for i in range(n)}

        for orig, goto, price in fl: gr[goto].append([orig, price])

        seen = set([dst])
        ret = 10**20 # just a veryyy big int

        def dfs(v, cost, k):
            nonlocal ret

            if k < 0 or cost >= ret: return

            if v == src:
                ret = cost
                return

            seen.add(v)

            for nb in gr[v]:
                if nb[0] not in seen: dfs(nb[0], cost + nb[1], k - 1)

            seen.discard(v)
            pass

        dfs(dst, 0, K+1)

        if ret == 10**20: return -1
        return ret
        pass
