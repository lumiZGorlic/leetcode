class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        ln = len(nums)
        nums.sort()        
        ret = set()

        for i in range(ln-3):
            for j in range(i+1, ln-2):

                l, r = j+1, ln-1
                rest = target - nums[i] - nums[j]

                while l < r:
                    if nums[l] + nums[r] > rest:
                        r -= 1
                    elif nums[l] + nums[r] < rest:
                        l += 1
                    else:
                        ret.add( (nums[i], nums[j], nums[l], nums[r]) )
                        l += 1
                        r -= 1

        return list(ret)
        pass
