class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        mp = defaultdict(int)

        for i,v in enumerate(nums):
            mp[i-v] += 1

        goodPairs = 0
        for v in mp.values():
            goodPairs += v * (v-1) // 2

        ln = len(nums)
        total = ln * (ln-1) // 2

        return  total - goodPairs
        pass
