class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        ret = 0
        cnt = Counter(nums)

        if not k:
            for value in cnt.values():
                if value > 1: ret += 1
            return ret

        for x in cnt.keys():
            if x + k in cnt: ret += 1

        return ret
        pass
