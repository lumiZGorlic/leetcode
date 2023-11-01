class Solution:
    def minIncrementOperations(self, nums: List[int], k: int) -> int:
        nums = [k, k] + nums

        @lru_cache(maxsize = None)
        def helper(prev, i):
            if i >= len(nums): return 0

            # add to nums[i] if it's less than k
            ret = (nums[i]<k) * (k-nums[i]) + helper((prev[-1], k), i+1)

            # see if it's possible not to add to nums[i]
            if nums[i] >= k or prev[-1] >= k or prev[-2] >= k:
                ret = min(ret, helper((prev[-1], nums[i]), i+1))

            return ret
            pass

        return helper( (nums[0], nums[1]), 2)
