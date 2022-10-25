class Solution:
    def minCost(self, nums: List[int], cost: List[int]) -> int:
        ret, maybeRet, sm = 0, 0, 0

        costPerVal = defaultdict(int)
        for n, c in zip(nums, cost):
            costPerVal[n] += c

        # first calculate the cost of reducing all values to 0
        for k, v in costPerVal.items():
            maybeRet += k*v
            sm += v

        ret = maybeRet
        nums = sorted( list(set(nums)) )
        prev = 0

        for n in nums:
            maybeRet -= sm * (n - prev)
            ret = min(ret, maybeRet)
            if n in costPerVal:
                sm -= 2*costPerVal[n]
            prev = n

        return ret
        pass


'''class Solution:
    def minCost(self, nums: List[int], cost: List[int]) -> int:
        n = len(nums)
        # Sort by nums
        arr = sorted((nums[i], cost[i]) for i in range(n))
        nums = [i[0] for i in arr]
        cost = [i[1] for i in arr]

        # Compute DP left to right
        left2right = [0] * n
        curr = cost[0]
        for i in range(1, n):
            left2right[i] = left2right[i - 1] + (nums[i] - nums[i - 1]) * curr
            curr += cost[i]

        # Compute DP right to left
        right2left = [0] * n
        curr = cost[-1]
        for i in range(n - 2, -1, -1):
            right2left[i] = right2left[i + 1] + (nums[i + 1] - nums[i]) * curr
            curr += cost[i]
            
        return min(left2right[i] + right2left[i] for i in range(n))
'''
