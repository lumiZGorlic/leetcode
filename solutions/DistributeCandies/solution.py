class Solution:
    def distributeCandies(self, candies: List[int]) -> int:
        return int( min(len(candies)/2, len(Counter(candies))) )

# C++ 1-liner: return min(unordered_set<int>(begin(c), end(c)).size(), c.size() / 2);
