class Solution:
    def findLHS(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        ret = 0

        for i in nums:
            if i-1 in cnt:
                ret = max(ret, cnt[i] + cnt[i-1])

        return ret        
