class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        gr = defaultdict(list)
        ret = []

        for s, d in tickets: gr[s].append([d,0])   
        for k,v in gr.items(): v.sort()

        done = 0

        def dfs(cur, s):
            if len(cur) == len(tickets)+1:
                ret.append(cur[:])
                nonlocal done
                done = 1
                return

            for el in gr[s]:
                if el[1]: continue

                cur.append(el[0])
                el[1] = 1
                dfs(cur, el[0])
                cur.pop()
                el[1] = 0

                if done: return
            pass

        dfs(['JFK'], 'JFK')

        if not ret: return []
        return ret[0]
        pass
