class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        ret = set()

        def helper(idx):
            if idx == len(nums)-1:
                ret.add(tuple(nums))
                return

            for i in range(idx, len(nums)):
                nums[i], nums[idx] = nums[idx], nums[i]
                helper(idx+1)
                nums[i], nums[idx] = nums[idx], nums[i]
            pass

        helper(0)
        return map(list, ret)

# in c++ i also solved it this way, a bit more tricky though,
# using string instead of tuple and stringstream to process 
