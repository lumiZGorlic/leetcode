class Solution:
    def searchRange(self, nums: List[int], t: int) -> List[int]:
        ln = len(nums)
        ret = []
        l, r, idx = 0, ln-1, -1

        while l <= r:
            md = l + (r-l)//2
            if nums[md] == t:
                idx = md
                break
            elif nums[md] < t:
                l = md+1
            else:
                r = md-1
        
        if idx == -1: return [-1, -1]

        l, r, idxl = 0, idx, idx

        while l <= r:
            md = l + (r-l)//2
            if nums[md] == t:
                r = md-1
                idxl = md
            else:
                l = md+1

        l, r, idxr = idx, ln-1, idx

        while l <= r:
            md = l + (r-l)//2
            if nums[md] == t:
                l = md+1
                idxr = md
            else:
                r = md-1
        
        return [idxl, idxr]
        pass
