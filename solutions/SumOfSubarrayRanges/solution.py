class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        ret, ln = 0, len(nums)
        stack = [[-1,0,0]]

        # subtracting min values
        for i, v in enumerate(nums):
            while len(stack) > 1 and stack[-1][1] >= v: stack.pop()

            # sum for subarrays that end at the current index
            sumForCurIdx = v * (i-stack[-1][0]) + stack[-1][2]
            stack.append([i, v, sumForCurIdx])
            ret -= sumForCurIdx

        stack = [[-1,0,0]]

        # adding max values
        for i, v in enumerate(nums):
            while len(stack) > 1 and stack[-1][1] <= v: stack.pop()

            # sum for subarrays that end at the current index
            sumForCurIdx = v * (i-stack[-1][0]) + stack[-1][2]
            stack.append([i, v, sumForCurIdx])
            ret += sumForCurIdx

        return ret
