class Solution:
    def shortestSubarray(self, A: List[int], K: int) -> int:
        N = len(A)
        P = [0]
        for a in A: P.append(P[-1] + a)

        ans = N+1
        monoq = collections.deque()
        for i, v in enumerate(P):
            while monoq and v <= P[monoq[-1]]:
                monoq.pop()

            while monoq and v - P[monoq[0]] >= K:
                ans = min(ans, i - monoq.popleft())

            monoq.append(i)

        return ans if ans < N+1 else -1
