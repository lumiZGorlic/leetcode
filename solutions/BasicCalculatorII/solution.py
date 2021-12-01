class Solution:
    def calculate(self, s: str) -> int:
        s = [c for c in s if c != ' ']

        s2, cur = [], []
        for i in range(len(s)):
            if s[i] in ['+', '-', '*', '/']:
                s2.append(''.join(cur))
                s2.append(s[i])
                cur = []
            else:
                cur.append(s[i])
        s2.append(''.join(cur))
        s = s2

        stack, i = [], 0

        while i < len(s):
            if s[i] == '*':
                v1 = stack.pop()
                v2 = s[i+1]
                stack.append(int(v1)*int(v2))
                i += 2
            elif s[i] == '/':
                v1 = stack.pop()
                v2 = s[i+1]
                stack.append(int(v1)/int(v2))
                i += 2
            else:
                stack.append(s[i])
                i += 1

        ret = int(stack.pop(0))

        while stack:
            c = stack.pop(0)

            if c == '+':
                ret += int(stack.pop(0))
            elif c == '-':
                ret -= int(stack.pop(0))

        return ret
