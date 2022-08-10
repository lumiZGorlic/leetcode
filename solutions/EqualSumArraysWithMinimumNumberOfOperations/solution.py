class Solution:
    def minOperations(self, nums1: List[int], nums2: List[int]) -> int:
        s1, s2 = sum(nums1), sum(nums2)
        if s1 == s2: return 0

        if s1 < s2:
            nums1, nums2 = nums2, nums1
            s1, s2 = s2, s1

        nums1.sort(reverse = True) # nums1 has bigger sum
        nums2.sort()               # nums2 has smaller sum

        ret, i1, i2 = 0, 0, 0

        while i1 < len(nums1) or i2 < len(nums2) :
            d1, d2 = 0, 0
            if i1 < len(nums1): d1 = nums1[i1] - 1
            if i2 < len(nums2): d2 = 6 - nums2[i2]

            if d1 >= d2 and i1 < len(nums1): # in bigger sum array replace biggest element with 1
                s1 += 1 - nums1[i1]
                i1 += 1
            elif d2 >= d1 and i2 < len(nums2): # in smaller sum array replace smallest element with 6
                s2 += 6 - nums2[i2]
                i2 += 1

            ret += 1
            if s1 <= s2: return ret

        return -1
        pass
