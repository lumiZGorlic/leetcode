# variations wo repetitions, n - set size, k - variation size
# factorial(n) // factorial (n - k)

class Solution:
    def countSpecialNumbers(self, num: int) -> int:
        num = [int(s) for s in list(str(num))]
        ln = len(num)

        # num has ln digits so first sum up special ints that have 1 digit, 2 digits, ...., ln digits        
        ret = 0
        for i in range(ln, 0, -1):
            a = factorial(10) // factorial(10-i)
            b = factorial(10-1) // factorial(10-i) # cos doesn't make sense for an int to start with '0' 
            ret += a-b

        # now need to deduct ints bigger than num
        done = set()

        # go through all digits, for each one do the following
        # fix ith digit and count all combinations. e.g. say nums is 4712
        # fix 1st digit to 5 and count all combinations, then same for 6, then 7 etc.
        # fix 2nd digit to 8 and count, then to 9. then 3rd digit
        # etc etc
        for i, d in enumerate(num):
            for d2 in range(d+1, 10):
                if d2 in done: continue

                a =  10-len(done)-1
                b = ln-i-1
                c = factorial(a) // factorial(a-b)
                ret -= c

            if d in done: break # if digit repeats, we can break
            done.add(d)

        return ret
