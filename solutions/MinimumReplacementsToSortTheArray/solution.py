# https://leetcode.com/problems/minimum-replacements-to-sort-the-array/discuss/2388143/Python-Google-interview-problem-why-strategy-beats-implementation

class Solution:
    def minimumReplacement(self, nums: List[int]) -> int:
        ans = 0
        prev = inf

        for num in reversed(nums):
            if num > prev:
                times = (num + prev - 1) // prev
                prev = num // times
                ans += times - 1
            else:
                prev = num

        return ans
        pass

