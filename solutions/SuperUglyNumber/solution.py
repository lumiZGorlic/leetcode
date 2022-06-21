class Solution:
    def nthSuperUglyNumber(self, n: int, primes: List[int]) -> int:
        ugly = [1]
        unq = set([1])
        ptrs = [0] * len(primes)

        while len(ugly) < n:
            multis = [primes[i]*ugly[p] for i, p in enumerate(ptrs)]

            minm = min(multis)
            if minm not in unq:
                ugly.append(minm)
                unq.add(minm)

            idx = multis.index(minm)
            ptrs[idx] += 1

        return ugly[-1]
        pass
