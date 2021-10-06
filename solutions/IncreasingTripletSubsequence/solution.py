class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        ln = len(nums)
        a, b = nums[0], 10**20
        min_el = nums[0]

        for i in range(1, ln):
            if nums[i] > b: return True
            elif a < nums[i] < b: b = nums[i]
            elif min_el < nums[i] <= a:
                a = min_el
                b = nums[i]

            min_el = min(min_el, nums[i])

        return False
        pass
