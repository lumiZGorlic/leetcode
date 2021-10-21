class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ln = len(nums)
        ret, cur = [[], [nums[0]]], [[nums[0]]]

        def helper(idx):
            if idx >= ln: return

            cur_new = [[nums[idx]]]

            for el in cur:
                el_new = el[:]
                el_new.append(nums[idx])
                cur_new.append(el_new[:])

            cur.extend(cur_new)
            ret.extend(cur_new)
            helper(idx+1)
            pass

        helper(1)
        return ret
        pass
