class Solution:
    def addDigits(self, num: int) -> int:

        if not num: return 0
        if not num % 9: return 9
        return num % 9

        pass
