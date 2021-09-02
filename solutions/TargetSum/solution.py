class Solution:
    def findTargetSumWays(self, nums: List[int], S: int) -> int:
        ln = len(nums)
        ret = {0 : 1}

        for i in range(ln):
            ret2 = defaultdict(int)

            for key, value in ret.items():
                ret2[key-nums[i]] += value
                ret2[key+nums[i]] += value

            ret = ret2

        return ret[S]
        pass

        '''
        # other solution
        @lru_cache(None)
        def f(s, idx):
            if idx == -1:
                if not s:
                    return 1
                return 0

            return f(s-nums[idx], idx-1) + f(s+nums[idx], idx-1)

        return f(S, len(nums)-1)'''
