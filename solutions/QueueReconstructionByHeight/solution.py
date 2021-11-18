class Solution:
    def reconstructQueue(self, ppl: List[List[int]]) -> List[List[int]]:
        dq = deque()
        # sort by height (tallest first), then by position
        ppl.sort( key = lambda x : [-x[0], x[1]])

        # for given iteration we are processing a person Pi with height hi and
        # position pi. Since all tallest persons are already in dq and in the right
        # order, we can insert Pi in the right place in dq
        for p in ppl: dq.insert(p[1], p)

        return dq
        pass
