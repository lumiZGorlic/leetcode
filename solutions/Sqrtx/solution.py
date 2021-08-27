class Solution:
    def mySqrt(self, x: int) -> int:
        if not x: return x

        l, r = 1, x
        ret = 1

        while l <= r:
            md = l + (r-l)//2
            mdTo2 = pow(md, 2)

            if mdTo2 == x:
                return md
            elif  mdTo2 > x:
                r = md - 1
            else:
                l = md + 1
                ret = md

        return ret
        pass
