# LC 84 Largest Rectangle in Histogram solution
class Solution:
    def maximumScore(self, nums: List[int], k: int) -> int:
        nums.append(0)
        stack = [-1]
        ans = 0
        for i in range(len(nums)):
            while nums[i] < nums[stack[-1]]:
                h = nums[stack.pop()]
                w = i - stack[-1] - 1
                # only consider rectangles that contain index k
                if stack[-1] < k < i:
                    ans = max(ans, h * w)
            stack.append(i)

        return ans
        pass
