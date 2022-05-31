class Solution:
    def kthSmallestPath(self, dest: List[int], k: int) -> str:
        v, h = dest
        ret = []

        factorial = [1] * 32
        for i in range(2, 32): factorial[i] = factorial[i-1] * i

        while 1:
            if not h:
                ret += ['V'] * v
                break
            elif not v:
                ret += ['H'] * h
                break
            else:
                # number of combintions if we pick 'H'
                # to understand the below, consider (or just google...) combinations with duplicates
                cnt = factorial[h+v-1] // (factorial[h-1] * factorial[v])

                if k <= cnt:
                    h -= 1
                    ret += ['H']
                else:
                    k -= cnt
                    v -= 1
                    ret += ['V']
            pass

        return ''.join(ret)
        pass
