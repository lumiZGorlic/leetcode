class Solution:
    def rob(self, nums: List[int]) -> int:
        ln, ret = len(nums), nums[0]
        if ln == 1: return ret

        # scenario I - nums[0] taken. Hence cannot rob nums[ln-1]
        dp1, dp2 = 0, nums[0]

        for i in range(2, ln-1):
            dp2, dp1 = max(dp1, dp2), dp2 + nums[i]

        ret = max(dp1, dp2)

        # scenario II - nums[0] not taken. So it's ok to rob nums[ln-1]
        dp1, dp2 = nums[1], 0

        for i in range(2, ln):
            dp2, dp1 = max(dp1, dp2), dp2 + nums[i]

        return max(ret, dp1, dp2)
        pass
