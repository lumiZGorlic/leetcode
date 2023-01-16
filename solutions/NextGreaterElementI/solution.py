class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ln1, ln2 = len(nums1), len(nums2)
        ge = [-1] * ln2
        stack = [nums2[-1]]
        mp = { nums2[-1] : ln2-1 }

        for i in range(ln2-2, -1, -1):
            while len(stack) and stack[-1] < nums2[i]:
                stack.pop()

            if len(stack): ge[i] = stack[-1]
            stack.append(nums2[i])
            mp[nums2[i]] = i

        return [ge[mp[n]] for n in nums1]
        pass
