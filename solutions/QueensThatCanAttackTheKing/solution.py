class Solution:
    def queensAttacktheKing(self, queens: List[List[int]], king: List[int]) -> List[List[int]]:
        ret = []
        qnset = { (qx, qy) for qx, qy in queens }
        dirs = [ [1,0], [0,1], [-1,0], [0,-1], [1,1], [1,-1], [-1,1], [-1,-1] ]

        for d in dirs:
            kx, ky = king[0], king[1]
            dx, dy = d[0], d[1]

            kx += dx
            ky += dy
            while kx >= 0 and kx < 8 and ky >= 0 and ky < 8:
                if (kx,ky) in qnset:
                    ret.append([kx,ky])
                    break
                kx += dx
                ky += dy

        return ret
        pass
