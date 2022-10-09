class Solution:
    def robotWithString(self, s: str) -> str:
        ln = len(s)
        s = deque(s)
        smallestToRight = deque() # first el is the smallest value in the whole s, second the smallerst in s[1:] etc

        minc = 'z'
        for c in reversed(s):
            minc = min(minc, c)
            smallestToRight.appendleft(minc)

        p, t = deque(), deque()

        while len(p) < ln:
            if not len(t):
                t.append( s.popleft() )
                smallestToRight.popleft()
            elif not s:
                p.append( t.pop() )
            elif smallestToRight[0] >= t[-1]:
                p.append( t.pop() )
            else:
                t.append( s.popleft() )
                smallestToRight.popleft()

        return ''.join(p)
        pass
