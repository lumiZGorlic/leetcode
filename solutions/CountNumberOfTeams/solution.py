class Solution:
    def numTeams(self, rating: List[int]) -> int:

        def countTeams():
            ln, ret = len(rating), 0
            biggerThanMe = [0 for _ in range(ln)]

            for i in range(ln-1, -1, -1):
                for j in range(i+1, ln):
                    if rating[j] > rating[i]: biggerThanMe[i] += 1

            for i in range(ln):
                for j in range(i+1, ln):
                    if rating[j] > rating[i]:
                        ret += biggerThanMe[j]
            return ret
            pass

        ret = countTeams()
        rating = rating[::-1]
        ret += countTeams()
        return ret
        pass

