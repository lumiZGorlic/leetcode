class Solution:
    def smallestNumber(self, pattern: str) -> str:
        ln = len(pattern)
        stack = [1]

        for i, c in enumerate(pattern):
            if c == 'D':
                tmp = []
                j = i
                while stack and pattern[j] == 'D':
                    tmp.insert(0, stack.pop())
                    j -= 1
                stack.append(i+2)
                stack += tmp
            else:
                stack.append(i+2)

        stack = [str(i) for i in stack]
        return ''.join(stack)
        pass


'''
        # backtracking

        ln = len(pattern)
        ret = '987654321'

        def f(idx, s):
            nonlocal ret
            
            if idx >= len(pattern):
                tmps = ''.join(s)
                if tmps < ret: ret = tmps
                return 
 
            if pattern[idx] == 'I':
                beg = int(s[-1])
                for i in range(beg+1,10):
                    if i in used: continue

                    s += str(i)
                    used.add(i)
                    f(idx + 1, s)
                    s.pop()
                    used.discard(i)
            else:
                beg = int(s[-1])
                for i in range(beg-1, 0, -1):
                    if i in used: continue

                    s += str(i)
                    used.add(i)
                    f(idx + 1, s)
                    s.pop()
                    used.discard(i)
            pass


        s, used = [], set()
        for i in range(1, 10):
            used.add(i)
            s += str(i)
            f(0, s)
            s.pop()
            used.discard(i)

        return ret
'''
