
class Solution:
    def reverseWords(self, s: str) -> str:
        # solution 1
        #s = s.split()
        #s = [''.join(reversed(w)) for w in s]
        #return ' '.join(s)

        # solution 2
        #return ' '.join(s.split()[::-1])[::-1]

        # solution 3
        return ' '.join(x[::-1] for x in s.split())
