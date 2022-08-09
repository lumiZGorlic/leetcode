class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        ln = len(nums)

        nums2 = [str(n) for n in nums]
        nums2 = [list(n) for n in nums2]
        nums2 = [n[::-1] for n in nums2]
        nums2 = [int(''.join(n)) for n in nums2]
        # above can be done in 1 line
        #nums2 = [int( ''.join( (list(str(n))[::-1]) ) ) for n in nums]

        ret = 0

        # nums[i] - nums2[i] + (nums2[j] - nums[j])
        mp = defaultdict(int)

        for i in range(ln):
            mp[nums[i] - nums2[i]] += 1

        for key, value in mp.items():
            ret += (value) * (value-1) // 2

        return ret % 1000000007
        pass
