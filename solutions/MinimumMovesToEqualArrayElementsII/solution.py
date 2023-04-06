class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()

        # basically a median is optimal. would be nice to have a rigorous proof.
        md = nums[len(nums)//2] 

        return sum(abs(md-n) for n in nums)
        pass
