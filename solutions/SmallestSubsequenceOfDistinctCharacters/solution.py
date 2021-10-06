class Solution:
    def smallestSubsequence(self, S: str) -> str:
        # last occurences
        last = {c: i for i, c in enumerate(S)}

        stack = []

        for i, c in enumerate(S):
            # this not clear to me
            if c in stack: continue

            # if what's on the stack can be found later and is greater than 'c', we can pop it
            while stack and stack[-1] > c and i < last[stack[-1]]:
                stack.pop()
            stack.append(c)

        return "".join(stack)
        pass
