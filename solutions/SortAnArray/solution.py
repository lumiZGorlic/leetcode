def quickSort(nums, l, r):
    n = r-l+1
    if n > 1:
        # can uncomment the below so the middle element picked as a pivot
        #md = l + (r-l) // 2
        #nums[r], nums[md] = nums[md], nums[r]

        i = l-1
        p = r #last element
        for j in range(l, r):
            if nums[j]<=nums[p]:
                i+=1
                nums[j],nums[i]=nums[i],nums[j]
        nums[p],nums[i+1]=nums[i+1],nums[p]

        if i+1 == r: i -= 1 # in case all elements smaller than the pivot

        # since only sorted element is i+1, so leaving it out, sorting rest
        quickSort(nums, l,   i+1)
        quickSort(nums, i+2, r  )
    pass

class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        quickSort(nums, 0, len(nums)-1)
        return nums
