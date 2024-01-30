class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        # elements nums[0], nums[ln-1] are dummy
        nums = [1] + nums + [1]
        ln = len(nums)

        # calling helper(l, r) we get best score for [l, r] assuming
        # nums[l-1] and nums[r+1] won't be touched
        @lru_cache(maxsize=None)
        def helper(l, r):
            ln = r-l+1
            if ln < 1: return 0
            if ln==1: return nums[l-1]*nums[l]*nums[l+1]
            if ln==2: return max(nums[l-1]*nums[l  ]*nums[l+1] + nums[l-1]*nums[l+1]*nums[l+2],
                                 nums[l  ]*nums[l+1]*nums[l+2] + nums[l-1]*nums[l  ]*nums[l+2])

            ret = 0
            for i in range(l, r+1):
                ret = max(ret, nums[i]*nums[l-1]*nums[r+1] + helper(l, i-1) + helper(i+1, r) )

            return ret
            pass

        return helper(1, ln-2)

 

        '''
        dp = defaultdict(int)
        def helper(nums2):
            ln2 = len(nums2)
            if ln2==0: return 0
            if ln2==1: return nums2[0]
            if ln2==2: return max(nums2[0], nums2[1]) + nums2[0]*nums2[1]

            key = tuple(nums2)
            if key in dp: return dp[key]
            ret = 0

            for i in range(1, ln2-1):
                ret = max(ret, nums2[i-1]*nums2[i]*nums2[i+1] + helper(nums2[:i] + nums2[i+1:]) )
            ret = max(ret, nums2[0]     * nums2[1]     + helper(nums2[1:]) )
            ret = max(ret, nums2[ln2-1] * nums2[ln2-2] + helper(nums2[:ln2-1]) )

            dp[key] = ret
            return ret
            pass
        

        return helper(nums)
        pass
        '''
        
