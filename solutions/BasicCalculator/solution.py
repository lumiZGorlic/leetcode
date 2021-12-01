class Solution:
    def calculate(self, s: str) -> int:
        s = [c for c in s if c != ' ']

        s2, cur = [], []
        for i in range(len(s)):
            if s[i] in ['+', '-', '(', ')']:
                if cur: s2.append(''.join(cur))
                s2.append(s[i])
                cur = []
            else:
                cur.append(s[i])

        if cur: s2.append(''.join(cur))
        s = s2

        if s[0] == '(': s = ['+'] + s
        stack = []
        ret = 0
        flip = 0 # to keep track of whether to flip sign
        operFlip= { '+': '-', '-': '+' }

        for idx, v in enumerate(s):
            if s[idx] == '(': continue # '(' taken into account below

            if v == '+' or v == '-':
                if s[idx+1] == '(':
                    stack.append(v)
                    if v == '-': flip = not flip # if '-' sign and parenthesis start then flip
            elif v == ')':
                if stack.pop() == '-': flip = not flip
            else:
                oper = '+'
                if idx and s[idx-1] != '(': oper = s[idx-1]
                if flip: oper = operFlip[oper]

                if oper == '+': ret += int(v)
                else: ret -= int(v)

        return ret
        pass
