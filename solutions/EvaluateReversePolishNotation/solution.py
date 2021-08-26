class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        ln = len(tokens)
        s = []

        for t in tokens:
            if t not in '+-*/':
                s.append(int(t))
            else:
                v1, v2 = s.pop(), s.pop()

                if t == '+':
                    s.append(v1+v2)
                elif t == '-':
                    s.append(v2-v1)
                elif t == '*':
                    s.append(v1*v2)
                elif t == '/':
                    s.append(int(v2/v1))

        return s.pop()
