class Solution:
    def videoStitching(self, clips: List[List[int]], T: int) -> int:
        ln = len(clips)
        clips.sort()

        mx, ret, idx = 0, 0, 0

        while idx < ln and mx < T :
            newmx = mx

            while idx < ln and clips[idx][0] <= mx:
                newmx = max(newmx, clips[idx][1])
                idx += 1

            if newmx == mx: return -1
            if newmx > mx: ret += 1
            mx = newmx

        if mx < T: return -1
        return ret
        pass
