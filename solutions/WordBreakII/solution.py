


class Solution:
    def wordBreak(self, s: str, wd: List[str]) -> List[str]:
        ln = len(s)

        solved = [[] for _ in range(ln+1)]
        solved[ln].append([""])

        wd = set(wd)

        for i in range(ln-1, -1, -1):
            for j in range(i, ln):
                if s[i: j+1] in wd and solved[j+1]:
                    for wordsList in solved[j+1]:
                        solved[i].append([s[i: j+1]] + wordsList)

        ret = []

        for wordsList in solved[0]:
            phrase = ''
            for word in wordsList:
                phrase = phrase + ' ' + word
            ret.append(phrase[1:-1])
        
        return ret
        pass
