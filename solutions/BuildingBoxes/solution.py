class Solution:
    def minimumBoxes(self, n: int) -> int:

        # https://leetcode.com/problems/building-boxes/discuss/1032016/C%2B%2B-Python-3-variables-solution-with-drawing-explanation
        cur = i = j = 0
        while cur < n:
            j += 1
            i += j
            cur += i
        if cur == n: return i
        
        cur -= i
        i -= j
        j = 0
        while cur < n:
            j += 1
            cur += j
        return i+j
        
        
        # below my solution
        '''
        layers = [0]
        total, extra = 0, 1

        while total < n:
            tmp = layers[-1] + extra
            total += tmp
            layers.append(tmp)
            extra += 1

        if total == n: return layers[-1]

        total -= layers[-1]
        rest = [n - total]
        layers.pop()

        l2 = [0 for i in range(len(layers))]

        def f(l2, idx, rest):
            if not rest[0]: return
            rest[0] -= 1
            if idx == -1: return
            l2[idx] += 1

            if l2[idx] > 1:
                f(l2, idx-1, rest)

        while rest[0]: f(l2, len(layers)-1, rest)

        return layers[-1] + l2[-1]
        '''
