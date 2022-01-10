class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        numOfZer = nums.count(1)
        ret = numOfZer
        nums += nums # cause we consider a circular array

        # for each position of sliding window calculate required swaps

        missOnesInCurWdw = 0
        for i in range(numOfZer):
            if not nums[i]:
                missOnesInCurWdw += 1
        ret = min(ret, missOnesInCurWdw)

        for i in range(numOfZer, len(nums)):
            if nums[i]:
                missOnesInCurWdw -= 1
            if nums[i-numOfZer]:
                missOnesInCurWdw += 1
            ret = min(ret, missOnesInCurWdw)

        return ret
        pass
