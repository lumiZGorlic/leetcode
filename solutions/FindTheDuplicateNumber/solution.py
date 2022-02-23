class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        s = 2**(len(nums))-1
        for x in nums:
            p = 2**x
            if ((p & s) == 0):
                return x
            s = s - p
        pass
