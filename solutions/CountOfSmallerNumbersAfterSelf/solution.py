def mergesort(nums, l, r):
    if l >= r: return
    md = l + (r-l)//2
    mergesort(nums, l, md)
    mergesort(nums, md+1, r)

    for i in range(l,md+1): nums[i][3] = i
    for i in range(md+1,r+1): nums[i][3] = -1

    tmp = []
    idx1, idx2 = l, md+1
    while idx1 <= md or idx2 <= r:
        if idx1 <= md and idx2 <= r:
            if nums[idx1][0] <= nums[idx2][0]:
                tmp.append(nums[idx1])
                idx1 += 1
            else:
                tmp.append(nums[idx2])
                idx2 += 1
        elif idx1 > md:
            tmp.append(nums[idx2])
            idx2 += 1
        elif idx2 > r:
            tmp.append(nums[idx1])
            idx1 += 1

    for i in range(r-l+1): nums[l+i] = tmp[i]

    for i in range(l, r+1):
        if nums[i][3] != -1: nums[i][2] += i - nums[i][3]

    pass

class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        ln = len(nums)
        # [val, orig_idx, cnt_smaller_elements_to_the_right, temp_idx_useful_for_updating_cnt]
        nums = [[nums[i], i, 0, 0] for i in range(ln)]

        mergesort(nums, 0, ln-1)

        ret = [0 for _ in range(ln)]
        for n in nums: ret[n[1]] = n[2]
        return ret
        pass
