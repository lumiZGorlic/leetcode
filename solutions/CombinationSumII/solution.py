# have a look at below
# https://leetcode.com/problems/combination-sum-ii/discuss/16878/Combination-Sum-I-II-and-III-Java-solution-(see-the-similarities-yourself)

class Solution:
    def combinationSum2(self, can: List[int], t: int) -> List[List[int]]:
        # a little trick in case there's lots of unnecessary duplicates
        cnt = Counter(can)
        can = []
        for k, v in cnt.items():
            if k*v > t:
                can += (t // k + 1) * [k]
            else:
                can += [k for _ in range(v)]

        if sum(can) < t: return []

        sm = sum(can)
        # a little optimization to be used below 
        sumAfterIdx = [sm for _ in range(len(can))]
        for i in range(1, len(can)):
            sumAfterIdx[i] = sumAfterIdx[i-1] - can[i-1]

        ret = []

        def f(idx, cur, s, t):
            if s == t:
                ret.append(cur[:])
                return

            if idx >= len(can): return
            if sumAfterIdx[idx] < t-s: return

            f(idx+1, cur, s, t)

            if s + can[idx] <= t:
                cur.append(can[idx])
                f(idx+1, cur, s+can[idx], t)
                cur.pop()
            pass

        f(0, [], 0, t)
        return list(set(tuple(el) for el in ret))
        pass
