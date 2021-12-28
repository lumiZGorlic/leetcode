class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        ln = len(nums)
        ret = []

        left, right = 0, 0

        for i in range(1, ln):
            left += abs(nums[0] - nums[i])

        ret.append(left)

        for i in range(1, ln):
            diff = nums[i] - nums[i-1]
            left -= diff * (ln-i)
            right += diff * i

            ret.append(left+ right)

        return ret
        pass
