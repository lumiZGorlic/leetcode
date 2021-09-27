class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = defaultdict(int)
        mp[0] = 1
        s, ret = 0, 0
        
        for n in nums:
            s += n
            if s - k in mp: ret += mp[s-k]
            mp[s] += 1

        return ret
