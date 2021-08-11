class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        ln = len(nums)

        dp = [1] * ln

        for i in range(1, ln):
            for j in range(i-1, -1, -1):
                if nums[j] < nums[i]: dp[i] = max(dp[i], dp[j] + 1)

        return max(dp)
        pass
