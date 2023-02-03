class Solution:
    def isReachable(self, tx: int, ty: int) -> bool:
        # numbers theory solution
        #g = gcd(tx, ty)
        #return g & (g-1) == 0
        

        # greedy solution
        # e.g. so we have input 90000 3, we check 4500 etc
        # no need to check 90000-3, 3. why ???

        def pow_of_2(x):
            return x & (x - 1) == 0
        def dp(x, y):
            if pow_of_2(x) or pow_of_2(y):
                return True
            elif x % 2 == 0:
                return dp(x // 2, y)  
            elif y % 2 == 0:
                return dp(x, y // 2)
            elif x > y:
                return dp(x - y, y) 
            elif y > x:
                return dp(x, y - x)
            return False
        return dp(tx, ty)

        pass
