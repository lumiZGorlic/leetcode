class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ret = []

        # op - how many '(' left to do, cl - how many ')' left to do
        def f(op, cl, cur):
            if not cl:
                ret.append(''.join(cur))
                return

            if op:
                cur.append('(')
                f(op-1, cl, cur)
                cur.pop()

            if cl > op:
                cur.append(')')
                f(op, cl-1, cur)
                cur.pop()

            pass

        cur = []
        f(n, n, cur)
        return ret
        pass        
