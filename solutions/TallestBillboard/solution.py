# https://leetcode.com/problems/tallest-billboard/discuss/219700/Python-DP-clean-solution(1D)
# Consider this problem as:
# Given a list of numbers, multiply each number by 1 or 0 or -1, make the sum of all numbers to 0. Find a combination which has the largest sum of all positive numbers.

class Solution:
    def tallestBillboard(self, rods: List[int]) -> int:
        # so key is the total sum and value is the sum of positive nums 
        mp = { 0 : 0} 

        for r in rods:
            mpnew = collections.defaultdict(int)

            for total, sumOfPositives in mp.items():

                mpnew[total + r] = max(mpnew[total + r], sumOfPositives + r)
                mpnew[total - r] = max(mpnew[total - r], sumOfPositives)
                mpnew[total] = max(mpnew[total], sumOfPositives)

            mp = mpnew

        return mp[0]


        # below brute force that will time out
        '''ret = 0
        rods.sort(reverse=True)
        mx = sum(rods) // 2

        @lru_cache(maxsize=None)
        def f(l, r, idx):
            nonlocal ret, mx
            if l == r: ret = max(ret, l)
            if idx == len(rods): return
            if l > mx or r > mx: return

            f(l+rods[idx], r, idx+1)
            if l != r: f(l, r+rods[idx], idx+1)
            f(l, r, idx+1)
            pass

        f(0, 0, 0)
        return ret'''

        pass
