class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        # calculate first sum and observe what happens with the sum in each rotation
        ln = len(nums)

        pre = [0] * (ln+1)
        for i in range(ln): pre[i+1] = pre[i] + nums[i]

        post = [0] * (ln+1)
        for i in range(ln-1, -1, -1): post[i] = post[i+1] + nums[i]

        ret = 0
        for i, v in enumerate(nums): ret += i * v

        l, r = 0, ret

        for idx in range(0, ln-1):
            l = l - pre[idx] + (ln-1)*nums[idx]
            r = r - post[idx+1]
            ret = max(ret, l+r)

        return ret
        pass
