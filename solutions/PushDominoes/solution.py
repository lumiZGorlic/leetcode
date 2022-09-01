# see it as dominos denoted with '.' that are placed between dominos falling
class Solution:
    def pushDominoes(self, domino: str) -> str:
        domino = ['L'] + list(domino) + ['R']
        ln, ret = len(domino), []

        forces = []
        for i, v in enumerate(domino):
            if v in 'LR': forces.append([i,v])

        for i in range(len(forces)-1):
            idx1, f1 = forces[i]
            idx2, f2 = forces[i+1]
            domsBetween = idx2-idx1-1 

            if f1 == 'L' and f2 == 'L':
                ret += ['L'] + domsBetween * ['L']

            elif f1 == 'R' and f2 == 'R':
                ret += ['R'] + domsBetween * ['R']

            elif f1 == 'L' and f2 == 'R':
                ret += ['L'] + domsBetween * ['.']

            elif f1 == 'R' and f2 == 'L':
                fallen = domsBetween // 2 # half will fall to right and other half to left
                domInMid = domsBetween % 2 # if odd number, domino in middle will stay vertical
                ret += ['R'] + fallen * ['R'] + domInMid * ['.'] + fallen * ['L']
            pass

        return ''.join(ret[1:])
        pass
