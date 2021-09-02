class Solution:
    def numTrees(self, n: int) -> int:
        if n == 1: return 1
        if n == 2: return 2

        ret = [1, 1]

        for i in range(3, n+1):
            tmp = 0
            for i in range(len(ret)):
                tmp += ret[i]*ret[len(ret)-1-i]
            ret.append(tmp)

        return ret[-1]
