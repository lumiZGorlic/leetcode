class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x: x[1])
        ret, ln = 0, len(points)
        i, r = 0, points[0][1]
        while i < ln:
            r = points[i][1]
            while i < ln and points[i][0] <= r:
                i += 1
            ret += 1
        return ret
        pass

        '''
        # below also seems to work 
        if len(points) == 0: return 0
        points.sort()
        ret = 1
        lim = (points[0])[1]
        for pnt in points:
            if pnt[0] > lim:
                ret += 1
                lim = pnt[1]
            else:
                if pnt[1] < lim: lim = pnt[1]
        '''

        return ret
