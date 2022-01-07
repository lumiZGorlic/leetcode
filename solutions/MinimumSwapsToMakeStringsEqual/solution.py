# find all the pairs xx and yy
#                    yy     xx
# we need to do 1 swap per pair
# then aditionally we might have unpaired xy yx which requires 2 swaps

class Solution:
    def minimumSwap(self, s1: str, s2: str) -> int:
        x, y = 0, 0
        for c in s1 + s2:
            if   c == 'x': x += 1
            elif c == 'y': y += 1

        if x % 2 or y % 2: return -1

        xy, yx = 0, 0
        for i in range(len(s1)):
            if   s1[i] == 'x' and s2[i] == 'y': xy += 1
            elif s1[i] == 'y' and s2[i] == 'x': yx += 1

        return xy // 2 + yx // + 2 + xy % 2 + yx % 2
        pass
