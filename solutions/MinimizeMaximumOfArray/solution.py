class Solution:
    def minimizeArrayValue(self, nums: List[int]) -> int:
        res = nums[0]
        s = nums[0]

        for i in range (1,len(nums)):
            s += nums[i]
            if nums[i] > res:
                res = max(ceil(s/(i+1)), res)

        return res
        pass
