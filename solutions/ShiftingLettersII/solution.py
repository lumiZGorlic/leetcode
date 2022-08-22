class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        abc = list(map(chr, range(97, 123))) # 26 letters
        abcmap = { v:i for i,v in enumerate(abc) }

        s = list(s)
        ln = len(s)
        offsets = [0 for _ in range(ln)]

        for beg, end, dire in shifts:
            if dire:
                offsets[beg] += 1
                if end+1 < ln: offsets[end+1] -= 1
            else:
                offsets[beg] -= 1
                if end+1 < ln: offsets[end+1] += 1

        curOffset = 0
        for i, off in enumerate(offsets):
            curOffset += off
            idx = (abcmap[s[i]] + curOffset) % 26
            s[i] = abc[idx]

        return ''.join(s)
        pass
