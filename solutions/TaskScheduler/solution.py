class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        # in python heap is by default a min heap. hence the minus in '-count'
        h = [[-count, task] for task, count in Counter(tasks).items()]
        heapq.heapify(h)

        ret = []

        # in each iteration pick up tasks with highest counts. If less than n tasks picked up then
        # fill with cooldown periods. Add those tasks back to the heap if their counter is not 0.
        while h:
            reuse = []
            ln = 0

            while h and ln < n+1:
                count, task = heapq.heappop(h)
                ret.append(task)
                count += 1
                if count: reuse.append([count, task])
                ln += 1

            if not h and not reuse: break

            if ln < n+1: ret.extend(['n']*(n+1-ln))

            for task in reuse: heapq.heappush(h, task)

        return len(ret)
