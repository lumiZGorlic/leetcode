class Solution:
    def canJump(self, nums: List[int]) -> bool:
        ln = len(nums)
        curFurthest = 0

        for i, v in enumerate(nums):
            if curFurthest < i: return False

            curFurthest = max(curFurthest, i + v)

            if curFurthest >= ln-1: break

        return True
