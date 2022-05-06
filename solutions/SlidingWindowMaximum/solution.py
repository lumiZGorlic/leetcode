class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        ret = []
        dq = deque()

        for i in range(len(nums)):
            while dq and dq[-1] <= i-k: dq.pop()
            while dq and dq[0] <= i-k: dq.popleft()

            if not dq or nums[i] >= nums[dq[-1]]:
                dq.append(i)
            else:
                while dq and nums[dq[0]] <= nums[i]:
                    dq.popleft()
                dq.appendleft(i)

            if i >= k-1: ret.append(nums[dq[-1]])

        return ret
        pass
