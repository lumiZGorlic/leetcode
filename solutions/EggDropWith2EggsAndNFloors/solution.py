# https://leetcode.com/problems/egg-drop-with-2-eggs-and-n-floors/discuss/1248560/Simple-Math-Problem-with-intuition-explained-O(1)-time-O(1)-space-or-Python
class Solution:
    def twoEggDrop(self, n: int) -> int:
        a = 1
        b = 1
        c = - 2 * n

        x = (-b + (b * b - 4 * a * c)**0.5) / 2.0

        if x - int(x) == 0 :
            return int(x)
        return int(x) + 1
        pass
