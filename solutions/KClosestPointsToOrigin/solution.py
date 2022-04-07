class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        points.sort(key = lambda p: pow(p[0], 2) + pow(p[1], 2))
        return points[:k]
