import queue

class Solution:
    def minJumps(self, arr: List[int]) -> int:
        ln = len(arr)

        idxs = defaultdict(set)
        for i, v in enumerate(arr):
            idxs[v].add(i)

        q = queue.Queue()
        q.put([0, 0])
        done = set([0])

        while q:
            pos, steps = q.get()

            if pos == ln-1: return steps

            jumps = idxs[arr[pos]]

            jumps.add(pos+1)
            if pos: jumps.add(pos-1)

            for j in jumps:
                if j not in done:
                    done.add(j)
                    q.put([j, steps+1])

            idxs[arr[pos]] = set()

        return ln-1
        pass
