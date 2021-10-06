class Solution:
    def maxProfit(self, p: List[int]) -> int:
        ln = len(p)
        if ln < 2: return 0
        if ln == 2: return max(0, p[1]-p[0])

        # b - bough, s - sold. so bsb would be situation that a person bought then sold then bought.
        # bsb would hold a max profix that can be made in those circumstances

        b = min(p[0], p[1], p[2])
        bs = max(p[1]-p[0], p[2]-p[0], p[2]-p[1])
        bsb = p[1]-p[0]-p[2]
        bsbs = 0
        
        for i in range(3, ln):
            prev_bs = bs

            bs = max(bs, p[i] - b)
            b = min(b, p[i])

            bsbs = max(bsbs, bsb + p[i])
            bsb = max(bsb, prev_bs - p[i])

        return max(bs, bsbs)
        pass
