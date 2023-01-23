class Solution:
    def checkIfPrerequisite(self, n: int, pre: List[List[int]], qrs: List[List[int]]) -> List[bool]:
        gr, indegree, q = defaultdict(list), [0]*n, deque()

        for nxt, prv in pre:
            gr[nxt].append(prv)
            indegree[prv] += 1

        for i in range(n):
            if indegree[i] == 0: q.append(i)

        prereqsPerNode = [set() for _ in range(n)]

        while q:
            cur = q.popleft()

            for nextCourse in gr[cur]:
                indegree[nextCourse] -= 1

                for nd in prereqsPerNode[cur]: prereqsPerNode[nextCourse].add(nd)
                prereqsPerNode[nextCourse].add(cur)

                if indegree[nextCourse] == 0: 
                    q.append(nextCourse)

        ret = []
        for n1, n2 in qrs:
            if n1 in prereqsPerNode[n2]:
                ret.append(True)
            else:
                ret.append(False)

        return ret


        '''ret = []

        gr = { i : [] for i in range(n) }

        for p in pre:
            gr[p[0]].append(p[1])

        def dfs(frm, to, gr, unq):
            if frm in unq: return False
            unq.add(frm)

            if to == frm: return True

            for nb in gr[frm]:
                if nb not in unq:
                    if dfs(nb, to, gr, unq):
                        return True

            return False
            pass

        for n1, n2 in qrs:
            ret.append(dfs(n1, n2, gr, set()))

        return ret'''
