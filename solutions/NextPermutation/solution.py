class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        ln = len(nums)
        idx = -1

        for i in range(ln-1, 0, -1):
            if nums[i-1] < nums[i]:
                idx = i-1
                break

        if idx == -1:
            nums.reverse()
            return

        i = ln-1
        while nums[i] <= nums[idx]: i -= 1 # with '<' it doesn not work for [1,5,1]
        nums[idx], nums[i] = nums[i], nums[idx]
        nums[idx+1:] = nums[idx+1:][::-1]
        pass
