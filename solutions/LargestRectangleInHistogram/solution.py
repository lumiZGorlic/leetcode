class Solution:
    def largestRectangleArea(self, height: List[int]) -> int:
        height.append(0)
        stack = [-1]
        ans = 0
        for i in range(len(height)):
            while height[i] < height[stack[-1]]:
                h = height[stack.pop()]
                w = i - stack[-1] - 1
                ans = max(ans, h * w)
            stack.append(i)

        return ans

# test cases to consider
# [2,0,2]
# [2,1,2]
