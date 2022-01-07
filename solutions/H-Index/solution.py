class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort(reverse=True)
        ret = 0
        for i, v in enumerate(citations):
            nop = (i+1)
            if v >= nop: ret = nop

        return ret
