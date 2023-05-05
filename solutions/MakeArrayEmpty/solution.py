class Solution:
    def countOperationsToEmptyArray(self, nums: List[int]) -> int:
        ln, ret = len(nums), 0
        nums = sorted([[v,i] for i,v in enumerate(nums)])
        idxs = [i for v,i in nums]

        m = ln
        ret = 0

        for i in range(1, ln):
            if idxs[i] < idxs[i-1]:
                ret += m
                m = ln - i

        ret += m
        return ret
        pass
