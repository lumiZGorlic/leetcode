class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if not k: return 0

        left, right = 0, 0
        ret, res = 0, 1

        for right in range(len(nums)):
            res *= nums[right]

            while left <= right and res >= k:
                res = res // nums[left]
                left += 1

            ret += right-left+1

        return ret
        pass
