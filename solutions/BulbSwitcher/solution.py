# https://leetcode.com/problems/bulb-switcher/discuss/77112/Share-my-o(1)-solution-with-explanation

class Solution:
    def bulbSwitch(self, n: int) -> int:
        return isqrt(n)
        
        '''bulbs = [False for i in range(n)]
                
        pos, incr = 0, 2
        while pos < n:
            bulbs[pos] = True
            pos += incr+1
            incr += 2

        return bulbs.count(True) '''
        pass
