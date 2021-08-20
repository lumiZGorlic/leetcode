class Solution:
    def permute(self, nums):
        return [[n] + p
                for i, n in enumerate(nums)
                for p in self.permute(nums[:i] + nums[i+1:])] or [[]]
    
        # can also just use library
        #return map(list, itertools.permutations(nums))
