
# O(logN) solution

class Solution:
    
    def myPow(self, x: float, n: int) -> float:
        if not n: return 1
        if n < 0:
            x = 1.0 / x
            n = -n

        def helper(x, n):
            if n == 1: return x
            
            ret = helper(x, n // 2)
            if n % 2: return ret * ret * x              
            return ret * ret

        return helper(x, n)
