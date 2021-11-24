class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        nums += nums
        ln = len(nums)
        ret, stack = [-1 for i in range(ln)], []

        for i,v in enumerate(nums):
            while stack and stack[-1][0] < v:
                idx = stack[-1][1]
                ret[idx] = v
                stack.pop()
            stack.append([v,i])
            pass

        return ret[:ln//2]
