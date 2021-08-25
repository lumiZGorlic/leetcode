class Solution:
    # way to think about it - i'm at a specific place on x axis, i lie down and look
    # up, how much water do i see only at this specific point x ?

    def trap(self, height: List[int]) -> int:
        ln, ret = len(height), 0

        l = [0] * (ln+1)
        r = [0] * (ln+1)

        mx = 0

        for i in range(ln-1):
            mx = max(mx, height[i])
            l[i+1] = mx

        mx = 0

        for i in range(ln-1, 0, -1):
            mx = max(mx, height[i])
            r[i-1] = mx

        for i in range(1, ln-1):
            h = min(l[i], r[i])
            if h > height[i]: ret += h - height[i]

        return ret
        pass
