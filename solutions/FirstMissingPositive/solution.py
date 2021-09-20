class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        ln = len(nums)

        def helper(orig, dest):
            tmp = nums[dest-1]
            nums[dest-1] = dest

            if tmp > ln or tmp <= 0 or orig+1 == tmp: nums[orig] = tmp
            elif tmp == dest: pass
            else: helper(orig, tmp)
            pass

        for i, v in enumerate(nums):
            # if value belongs somewhere (at some index) then put it there
            # say at first we have [7, 5, 2, 8] we would re-arrange it to [7, 2, 5, 8] so '2' ends up
            # where it belongs
            if v-1 != i and 0 < v <= ln: helper(i, v)

        for i, v in enumerate(nums):
            if v-1 != i: return i+1
        return ln+1
        pass
