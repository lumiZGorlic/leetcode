class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        ln = len(nums)
        l, r = ln-1, -1

        st = []
        for i, v in enumerate(nums):
            while st and st[-1][0] > v:
                l = min(l, st[-1][1])
                st.pop()
            st.append([v,i])

        st = []
        for i in range(ln-1, -1, -1):
            v = nums[i]
            while st and st[-1][0] < v:
                r = max(r, st[-1][1])
                st.pop()
            st.append([v,i])

        if r == -1: return 0
        return r-l+1
        pass

        '''    
        ln = len(nums)
        numsOrg = nums[:]
        nums.sort()

        l, r = -1, -1
        for i in range(ln):
            if nums[i] != numsOrg[i]:
                l = i
                break

        for i in range(ln-1, -1, -1):
            if nums[i] != numsOrg[i]:
                r = i
                break
        
        if l == -1: return 0
        return r-l+1
        pass
        '''
