class Solution:
    def monotoneIncreasingDigits(self, n: int) -> int:
        n = list(map(int, list(str(n))))
        ln = len(n)

        for i in range(0, ln-1):
            if n[i] > n[i+1]:
                idx = i
                while idx > 0 and n[idx] == n[idx-1]:
                    idx -= 1
                n[idx] -= 1
                n = n[:idx+1] + [9]*(ln-idx-1)
                break

        return int(''.join( list(map(str, n)) ))
        pass
