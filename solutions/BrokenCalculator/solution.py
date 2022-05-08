# link to site with the proof
#https://leetcode.com/problems/broken-calculator/discuss/1875066/Clean-and-documented-greedy-solution
class Solution:
    def brokenCalc(self, x: int, y: int) -> int:
        ans = 0

        while y > x:
            ans += 1
            if y%2: y += 1
            else: y /= 2
            pass

        return int(ans + x-y)
