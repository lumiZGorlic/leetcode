class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []

        for a in asteroids:
            if not stack or a > 0:
                stack.append(a)
            else:

                while True:
                    if not stack or stack[-1] < 0:
                        stack.append(a)
                        break

                    elif stack[-1] > 0:
                        if abs(stack[-1]) == abs(a):
                            stack.pop()
                            break
                        elif abs(stack[-1]) > abs(a):
                            break
                        else:
                            stack.pop()

        return stack
        pass
