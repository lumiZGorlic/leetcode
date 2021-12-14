class Solution:
    def sumSubarrayMins(self, nums: List[int]) -> int:
        mod = pow(10,9) + 7
        ret, ln = 0, len(nums)

        stack = [[-1,0,0]]

        for i, v in enumerate(nums):
            while len(stack) > 1 and stack[-1][1] >= v: stack.pop()

            # sum for subarrays that end at the current index
            sumForCurIdx = v * (i-stack[-1][0]) + stack[-1][2]
            stack.append([i, v, sumForCurIdx])
            ret += sumForCurIdx

        return ret % mod
        pass


        '''
        # with hash map maybe slightly easier to follow
        mod = pow(10,9) + 7
        ret, ln = 0, len(nums)

        idx2Sum = { -1:0 }
        stack = [[-1,0]]

        for i, v in enumerate(nums):
            while len(stack) > 1 and stack[-1][1] >= v: stack.pop()
            stack.append([i,v])

            idx = stack[-2][0]
            # sum for subarrays that end at the current index
            sumForCurIdx = v * (i-idx) + idx2Sum[idx]

            idx2Sum[i] = sumForCurIdx
            ret += sumForCurIdx

        return ret % mod
        pass'''
